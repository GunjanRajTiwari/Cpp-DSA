// Check for BST

#include <climits>
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x) {
    data = x;
    left = right = NULL;
  }
};

bool isBST(Node *root, int low = INT_MIN, int high = INT_MAX) {
  if (!root) return true;
  int val = root->data;
  if (val <= low || val >= high) return false;

  return isBST(root->left, low, val) && isBST(root->right, val, high);
}

int main() {
  Node *root = new Node(5);
  root->left = new Node(3);
  root->right = new Node(6);
  root->left->left = new Node(2);
  root->left->right = new Node(4);
  // root->left->right->right = new Node(6);
  // root->left->right->right->right = new Node(7);

  if (isBST(root)) {
    cout << "It is a BST. ";
  } else {
    cout << "It is not a BST.";
  }
  return 0;
}