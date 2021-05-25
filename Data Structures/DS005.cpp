// Loop detection in Linkedlist

#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

bool detectLoop(Node* head){
    Node* temp = new Node(0);
    
    while(head != NULL){
        if(head -> next == NULL) return false;

        if(head -> next == temp) return true;

        Node* rem = head -> next;

        // Set next of all visited list to temp;
        head -> next = temp;
        
        head = rem;
    }

    return false;
}

int main(){
    Node* head = new Node(1);
    head -> next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // The loop
    head->next->next->next->next = head -> next;

    if(detectLoop(head)){
        cout << "Loop found! \n";
    } else {
        cout << "No loop found! \n";
    }
    return 0;
}
