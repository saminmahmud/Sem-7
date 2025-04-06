#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node (int val){
            this->val = val;
            left = NULL;
            right = NULL;
        }
};

void psotorderTraversal(Node* root){
    if(root == NULL) return;
    
    psotorderTraversal(root->left);
    psotorderTraversal(root->right);
    cout<< root->val <<" ";
}

int main(){
    Node* root = new Node(1);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(42);
    Node* d = new Node(3);
    Node* e = new Node(2);
    Node* f = new Node(33);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    psotorderTraversal(root);
        
    return 0;
}

/*  input tree:
           1
          /  \
         4    6
        / \   / \
       42  3 2  33

    output: 42 3 4 2 33 6 1

    first visit the left subtree, then the right subtree, and finally the root.
    This is a recursive function that traverses the tree in post-order. 
*/