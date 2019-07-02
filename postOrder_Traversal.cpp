/*
1.1 Create an empty stack
2.1 Do following while root is not NULL
    a) Push root's right child and then root to stack.
    b) Set root as root's left child.
2.2 Pop an item from stack and set it as root.
    a) If the popped item has a right child and the right child 
       is at top of stack, then remove the right child from stack,
       push the root back and set root as root's right child.
    b) Else print root's data and set root as NULL.
2.3 Repeat steps 2.1 and 2.2 while stack is not empty.
*/
#include <iostream>
#include <stack> 
using namespace std; 
  
/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
void postOrder(Node * root) {
	stack<Node*> s;
	Node* curr = root;
	while (curr != NULL || !s.empty() ) 
    { 
    	if (curr != NULL) {
    		curr = curr->left;
		}
		else {
			Node * temp = s.top()->right;
			if (temp == NULL) {
				
			}
		}
  
    } /* end of while */
        
}
int main() {
		struct Node *root = new Node(1); 
    root->left             = new Node(2); 
    root->right         = new Node(3); 
    root->left->left     = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nInorder traversal of binary tree is \n"; 
    postOrder(root); 
    return 0;
}
