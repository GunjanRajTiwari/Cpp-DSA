// Reverse Linked List

#include <iostream>
using namespace std;

// Link list Node
struct Node {
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

void display(Node *head) {
  while (head) {
    cout << head->data << ' ';
    head = head->next;
  }
}

// Function to reverse
struct Node *reverseList(struct Node *head) {
  Node *prev = NULL, *now = head, *next = head;
  while (now) {
    next = now->next;
    now->next = prev;
    prev = now;
    now = next;
  }

  return prev;
}

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  Node *reversed = reverseList(head);

  display(reversed);

  return 0;
}