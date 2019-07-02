/* Ho va ten: Hoang Thi Linh
	Lop : INT2203 6
	MaSV: 17020852
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <fstream>
using namespace std;

int element = 1;

struct list
{
	int number;
	list *next;
};

list* input()
{
	list *p,*head;
	int n;
	p = NULL;
	head = NULL;
	//cout << "Nhap gia tri cho cac phan tu (nhap 0 de dung): ";
	while(true)
	{
		cin >> n;
		if(n==0)
		{
			p->next = head;
			return head;
		}
		if(head == NULL)
		{
			p = new list[1];
			head = p;
		}
		else
		{
			p->next = new list[1];
			p = p->next;
		}
		p->number = n;
		element++;
	}
}

void output(list *head)
{
	list *p;
	p = head;
	int i = 1;
	while(i < element)
	{
		cout<<p->number<<"  ";
		p = p->next;
		i++;
	}
	cout<<endl;
}

int play(list *head)
{
	list *p,*pt;
	p = head;
	while(p->next != p)
	{
	    for(int i = 1; i <= 3; i++)
            p = p->next;

		pt = p; //Cho pt tro den phan tu truoc phan tu bi xoa
		p = p->next;
        pt->next = p->next;
        element--;
		output(head);
		p = p->next;
	}
	return p->number; //Tra ve phan tu con lai sau cung
}

int main()
{
	list *head;
	int last;
	head = input();
	output(head);
	last = play(head);
	cout << "Output: " << last;
	
	system("pause");
	return 0;
}
