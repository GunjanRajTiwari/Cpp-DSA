// Trees

#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(){}
    Node(int n){
        data = n;
        left = NULL;
        right = NULL;
    }
};

// Traversals
void preOrder(Node* root){
    if(root == NULL) return;

    cout << root -> data << " - ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Node* root){
    if(root == NULL) return;

    inOrder(root -> left);
    cout << root -> data << " - ";
    inOrder(root -> right);
}

void postOrder(Node* root){
    if(root == NULL) return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " - ";
}

int main(){
    // Sample tree
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3); 
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    cout << "Pre Order Traversal: \n";
    preOrder(root);
    cout << '\n';

    cout << "In Order Traversal: \n";
    inOrder(root);
    cout << '\n';

    cout << "Post Order Traversal: \n";
    postOrder(root);
    cout << '\n';

    return 0;
}