// Merge two linked List

#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* sortedMerge(Node* head1, Node* head2) {
  Node* sorted = NULL;

  if (!head1) return head2;
  if (!head2) return head1;

  if (head1->data <= head2->data) {
    sorted = head1;
    sorted->next = sortedMerge(head1->next, head2);
  } else {
    sorted = head2;
    sorted->next = sortedMerge(head1, head2->next);
  }

  return sorted;
}

int main() {
  Node* head1 = new Node(2);
  head1->next = new Node(3);
  head1->next->next = new Node(20);
  head1->next->next->next = new Node(20);
  head1->next->next->next->next = new Node(50);

  Node* head2 = new Node(1);
  head2->next = new Node(5);
  head2->next->next = new Node(10);
  head2->next->next->next = new Node(15);
  head2->next->next->next->next = new Node(35);

  Node* sorted = sortedMerge(head1, head2);

  while (sorted) {
    cout << sorted->data << ' ';
    sorted = sorted->next;
  }

  return 0;
}