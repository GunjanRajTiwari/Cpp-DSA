// Binary Search Tree

#include <iostream>

using namespace std;

class BST {
    int data;
    BST *left, *right;

    public:
    BST():data(0),left(NULL),right(NULL){}

    BST(int n){
        data = n;
        left = right = NULL;
    }

    BST* insert(BST* root, int val){
        // when root is or reaches NULL
        if(!root) return new BST(val);

        if(root -> data < val){
            // for value greater than node value
            root -> right = insert(root -> right , val);
        } else {
            // for value greater than node value
            root -> left = insert(root -> left, val);
        }

        return root;
    }

    BST* search(BST* root, int key){
        // base case
        if(!root || root->data == key) return root;

        if(root->data < key)
            return search(root->right, key);
        else
            return search(root->left, key);
    }

    void inorder(BST* root){
        if(root){
            inorder(root -> left);
            cout << root->data <<' ';
            inorder(root -> right);
        }
    }
};

int main(){

    BST* root = NULL;
    root = root->insert(root, 50);
    root->insert(root, 20);
    root->insert(root, 70);
    root->insert(root, 60);
    root->insert(root, 10);
    root->insert(root, 30);
    root->insert(root, 80);

    BST* result = root->search(root, 20);
    if(!result){
        cout << "Not found!\n";
    } else {
        cout << "Found !!!\n";
    }

    root->inorder(root);
    return 0;
}