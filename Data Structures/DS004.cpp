// Linked List Implemetation

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int listSize = 0;

// Display the Linked List
void display(Node* head){
    while(head){
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "Null" <<'\n';
}

// Pushing data from the front of the Linked list
void pushFront(Node** head, int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;
    ++listSize;
}

// Pushing to the back of the Linked List
void pushBack(Node** head, int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    ++listSize;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    Node* last = *head;
    while(last -> next){
        last = last -> next;
    }
    last -> next = newNode;
    return;
}

// Pushing at a position
void pushAt(Node** head, int pos, int data){
    if(pos<0 || pos >= listSize){
        cout << "Invalid Position ! \n";
        return;
    }

    while(pos--){
        if(pos == 0){
            Node* newNode = new Node();
            newNode -> data =  data;
            newNode -> next = *head;
            *head = newNode;
        } else {
            head = &(*head) -> next;
        }
    }
}

int main(){
    Node* head = NULL;
    
    pushFront(&head, 2);
    pushFront(&head, 1);

    pushBack(&head, 4);
    pushBack(&head, 5);

    pushAt(&head, 3, 3);

    display(head);

    return 0;
}