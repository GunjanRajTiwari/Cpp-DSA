// Rotate Linked List

#include <iostream>
using namespace std;

// Link list Node
struct Node {
  int data;
  Node* next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

void display(Node* head) {
  while (head) {
    cout << head->data << ' ';
    head = head->next;
  }
}

Node* rotate(Node* head, int k) {
  if (k == 0) return head;

  Node* slow = head;
  Node* fast = head;
  while (fast) {
    slow = fast;
    fast = fast->next;
  }

  slow->next = head;

  fast = head;
  for (int i = 0; i < k; ++i) {
    slow = fast;
    fast = fast->next;
  }

  Node* newHead = fast;
  slow->next = NULL;
  return newHead;
}

int main() {
  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  Node* rotated = rotate(head, 3);

  display(rotated);

  return 0;
}