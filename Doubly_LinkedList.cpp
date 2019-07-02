/* Chuong trinh xay dung cau truc danh sach lien ket doi va dinh nghia cac phep toan:
          - Khoi tao danh sach
          - Kiem tra danh sach rong
          - Chen mot phan tu vao vi tri i trong danh sach
          - Loai bo mot phan tu sau vi tri i trong danh sach
*/
#include <iostream>
using namespace std;
// Dinh nghia cau truc danh sach
template <class Item>
struct List {
    Item element;
    List *next;
    List *prev;
};
// Khoi tao danh sach
void Initial(List<Item> *&head, List<Item> *&tail)
{
    head = NULL;
    tail = NULL;
}

// Kiem tra danh sach rong
bool IsEmpty(List<Item> *head, List<Item> *tail)
{
    if (head == NULL) return true;
    else return false;
}

// Chen mot phan tu vao vi tri i
void Insert(List<Item> *&head,List<Item> *&tail, int i, Item x){
     List<Item> *p;
     p=new List<Item>;
     p->element=x;
     p->next=NULL;
     p->prev=NULL;
     if (i==1){
        if (IsEmpty(head,tail)){head=p;tail=p;}
        else {p->next=head;head=p;}
     }
     else {
          List<Item> *q=head;

          int count=1;
          while ((count<i-1)&&(q!=NULL)){
               q=q->next;
               count++;
          }
          if (q!=NULL) {p->next=q->next; q->next=p;}
     }
}
