// Middle of linked list

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

int getMiddle(Node *head) {
  Node *slow = head, *fast = head;
  while (true) {
    if (!fast) break;
    if (fast->next == NULL) break;
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow->data;
}

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  cout << getMiddle(head);

  return 0;
}