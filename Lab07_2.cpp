#include <iostream>
#define MaxNode 6

struct Node{
	int data;
};
struct Tree {
	Node Parent[MaxNode];
	
};

Node OldestChild(Node n,Tree T)

{

    int i;

    int found;

    if (n.data<0)

        {	
        	n.data = -1;
        	return n;
		}

    i=n.data;        

    found=0;

    while ((i<=MaxNode-1) && !found)

        if (T.Parent[i].data == n.data)

            found=1;

        else i=i+1;

    if (found)

        {
        	n.data = i+2;
        	return n;
		}

    else

        {	
        	n.data = -1;
        	return n;
		}

}
//Ham xac dinh em lien ke cua mot nut

Node NextSibling(Node n,Tree T)

{
	int i;
    Node parent;

    int found;

    if (n.data<0)

        {
        	n.data = -1;
        	return n;
		}

    parent=T.Parent[n.data];

    i = n.data ;

    found=0;

    while ((i<=MaxNode-1) && !found)

        if (T.Parent[i].data == parent.data)

            found=1;

        else i=i+1;

    if (found)

        {
        	n.data = i+1;
        	return n;
		}

    else
		{
			n.data = -1;
			return n;
		}
        

}
using namespace std;
int main() {
	Tree T;
	T.Parent[0].data = 1;
	T.Parent[1].data = 1;
	T.Parent[2].data = 2;
	T.Parent[3].data = 2;
	T.Parent[4].data = 2;
	T.Parent[5].data = 3;
	
	Node n;
	n.data = 2;
	cout << OldestChild(n,T).data << endl;
	n.data = 4;
	cout << NextSibling(n,T).data << endl;
	return 0;
}
