// Bottom view of binary tree

#include <iostream>
#include <map>
#include <queue>
#include <utility>

using namespace std;

struct Node {
  int data;
  Node *left, *right;

 public:
  Node(int n) {
    data = n;
    left = NULL;
    right = NULL;
  }
};

void bottomView(Node *root) {
  queue<pair<Node *, int>> q;
  q.push({root, 0});
  map<int, int> mp;

  while (!q.empty()) {
    pair<Node *, int> cur = q.front();
    q.pop();
    if (cur.first == NULL) continue;

    mp[cur.second] = cur.first->data;

    q.push({cur.first->left, cur.second - 1});
    q.push({cur.first->right, cur.second + 1});
  }

  for (auto i : mp) {
    cout << (i.second) << ' ';
  }
}

int main() {
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->right = new Node(6);
  root->left->right->right->right = new Node(7);

  bottomView(root);

  return 0;
}
