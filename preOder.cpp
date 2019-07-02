#include <iostream>
using namespace std;
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
void preOrder(Node *root)
{
	while (root) 
    { 
         
        if (root->left == NULL) 
        { 
            cout << root->data << " ";
            root = root->right; 
        } 
        else
        { 
           
            Node* current = root->left; 
            while (current->right && current->right != root) 
                current = current->right; 
  
            if (current->right == root) 
            { 
                current->right = NULL; 
                root = root->right; 
            } 
            else
            { 
                cout << root->data << " ";
                current->right = root; 
                root = root->left; 
            } 
        } 
    } 
}
int main() {
	Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    preOrder(root); 
	return 0;
}
