#include<iostream>
#include<cstdio>
#include<process.h>
using namespace std;
 struct hs
    {
        char ht [30] ;
        int ns ;
    };

 typedef struct node
      {
         hs info ;
         node *next ;
         node *prev;
                  };
    struct List
                 {
          node *head ;
          node *tail ;
      };
// Khoi tao danh s�ch rong
 void   CreatList(List & L)
  {
   L.head = NULL ;
   L.tail = NULL ;
    }
   node *  new_ele =  NULL;

// Nhap thong tin cho 1 phan tu
   node* _input ()
   {
        node * q = new  node ;
        cout<< "\nHo ten : " ;
        fflush  (stdin) ;
        gets ( q -> info.ht ) ;
        cout<< "Nhap nam sinh : " ;
        cin>> q -> info.ns ;
        q -> next = q -> prev = NULL ;
        return q ;
      }
//  Bo sung 1 phan tu v�o cuoi danh s�ch
    void   AddTail   (List & L )
   {
           new_ele = _input () ;  // Nhap th�ng tin cua phan tu moi
           if ( L.head == NULL ) // Kiem tra danh s�ch rong
     {
                    //N?u ds r?ng th�
   //head = new_ele;
   //tail = head;
  L.head = L.tail = new_ele ;
               }
            else
             {
 //Ngu?c l?i
   //tail = new_ele->prev;
   //tail->next = new_ele;
   //tail = new_ele;
                new_ele -> prev = L.tail ;
                 L.tail -> next = new_ele;
                 L.tail = new_ele;
              }
   }
 // In ra danh s�ch h?c sinh c� nam sinh t? 1980 tr? v? d�y
 void   Process  ( List   L )
        {
    node * p = L.head  ; // con tr? p tr? t?i ph?n t? d?u ti�n c?a danh s�ch
            if  ( L.head == NULL ) //Ki?m tra danh s�ch r?ng
               cout<< "\nDanh sach rong !!! " ;
               cout<<"\n\n===========================\n";
               cout<< "\nDanh sach nhung nguoi sinh sau nam 1980 : \n  " ;
    while ( p -> next != NULL )
               {
                   if ( p -> info.ns > 1980 )
   //Trong khi (p!=NULL)& ( p -> info.ns > 1980 )
   //Th?c hi?n:
 //Xu?t ra th�ng tin p
   //p = p->next;
                     {
                        cout<<"\nHo ten : "<<p ->info.ht ;
         cout<<"\nNam sinh :"<<p->info.ns;
   cout<<"\n";
                       }
    p = p->next;
                  }
             }
//X�a  th�ng tin h?c sinh cu?i danh s�ch
  void   DelTail  ( List  & L )
     {
    node*  p;
        if  ( L.tail != NULL ) // N?u danh s�ch kh�c r?ng
          {
     L.tail = p ; //p l� ph?n t? c?n h?y
 //T�ch p ra kh?i x�u
                L.tail = L.tail -> prev ;
   L.tail -> next = NULL ;
             delete  p ; //H?y bi?n do p tr? d?n
             if ( L.head == NULL )
 //N?u n�t d?u l� r?ng th� n�t cu?i r?ng
                   L.tail = NULL ;
             else
   //ngu?c l?i head->prev = NULL;
                  L.head -> prev = NULL ;
        }
 }
int main ()
       {
           List  L ;
     CreatList(L) ;
     int tk;
     menu:
     cout<<"\n================MENU===============\n\n";
     cout<<"1. Them mot phan tu vao cuoi danh sach \n";
     cout<<"2. Hien thi nhung nguoi co nam sinh > 1980 \n";
     cout<<"3. Xoa phan tu cuoi danh sach \n";
     cout<<"4. Thoat \n ";
     cin>>tk;
     switch (tk)
     {
     case 1:
     {
     int  t = 1 ;
           cout<<"\nThem 1 phan tu vao cuoi danh sach ";
           while  ( t ==1 )
              {
                   AddTail  ( L) ;
                   cout<< "Tiep tuc nhap ? ( 1 / 0 ) : " ;
                   cin>> t ;
      }
      goto menu;
     }
     case 2:
     {
     Process( L ) ;
    goto menu;
     }
     case 3:
     {
     DelTail(L);
     goto menu;
     }
     case 4:
     {
     //exit(1);
     }
     default:
     {
     cout<<"Lua chon khong phu hop ! \n";
     cout<<"Xin moi chon lai !!! ";
     goto menu;
     }
    }
    return 0;
   }
