// Left view of binary tree

#include <iostream>
#include <queue>
#include <vector>

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

vector<int> leftView(Node *root) {
  vector<int> ans;
  if (!root) return ans;

  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();

    for (int i = 0; i < n; ++i) {
      Node *cur = q.front();
      q.pop();

      if (i == 0) ans.push_back(cur->data);
      if (cur->left) q.push(cur->left);
      if (cur->right) q.push(cur->right);
    }
  }
  return ans;
}

int main() {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->right = new Node(6);
  root->left->right->right->right = new Node(7);

  vector<int> lview = leftView(root);
  for (auto i : lview) {
    cout << i << ' ';
  }
  return 0;
}