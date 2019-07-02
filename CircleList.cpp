#include <bits/stdc++.h>

using namespace std;

struct Node{
	int value; 
	Node *next; 
};

struct SetList{
	Node *head = new Node;
	Node *tail = new Node;  
	int size = 0; 
	SetList(){
		head = NULL;
		tail = NULL; 
	}
	
	void Setsize(int size){
		this->size = size; 
	}
	
	Node* addTailToList(int value){
		Node *p = new Node;
		p->value = value; 
		p->next = NULL; 
		if (this->head == NULL){
			p->next = head; 
			head = p; 
			return head; 
		}
		else {
			this->tail = this->head; 
			while (tail->next != NULL){
				tail = tail->next; 
			}
			tail->next = p; 
			return head; 
		}
	}

	void CircleList(){
		if (size > 1){
			this->tail->next->next = this->head;	
		}	
	}

	void printfcircle(int n){
		while (size > 0){
			Node *p1 = new Node; 
			for (int i = 0; i < n-1; i++){
				head = head->next; 
				if (i == n-3){
					p1 = head; 
				}
			}
			cout << head->value << " "; 
			Node *p = head; 
			head = head->next; 
			delete p;
			Node *p3 = head; 
			p1->next = p3; 
			size--; 
		}
	}
};

int main()
{
	SetList S; 
	int n; 
	cin >> n;
	S.Setsize(n); 
	for (int i = 0; i < n; i++){
		int num; 
		cin >> num; 
		S.head = S.addTailToList(num); 
	}
	S.CircleList(); 
	S.printfcircle(3); 
}
