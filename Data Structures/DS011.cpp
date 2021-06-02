// Level order traversal of a tree

#include <iostream>
#include <queue>

using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(){}

    Node(int n){
        data = n;
        left = right = NULL;
    }

    void levelOrder(Node* root){
        if(!root) return;

        // Using queue for bfs
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            // printing the front of queue 
            Node* cur = q.front();
            cout << cur -> data << ' ';
            q.pop();

            // pushing left to the queue
            if(cur->left) q.push(cur->left);

            // pushing right to the queue
            if(cur->right) q.push(cur->right);
        }
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right = new Node(6);
    root->left->right->left = new Node(7);

    root->levelOrder(root);

    return 0;
}