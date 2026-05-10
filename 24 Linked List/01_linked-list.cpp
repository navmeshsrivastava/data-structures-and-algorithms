#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node *next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        int value = this -> data;

        // memory free
        if( this -> next != NULL ) {
            delete next;
            this -> next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }

};

void insertAtHead ( Node* &head, int d ) {

    // New Node Creation
    Node* temp = new Node(d);

    temp -> next = head;

    head = temp;

}

void insertAtTail ( Node* &tail, int d ) {
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition ( Node* &head, Node* &tail, int pos, int d ) {

    if(pos == 1) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }

    Node* temp = head;

    int cnt = 1;
    while ( cnt < pos-1 ) {
        temp = temp -> next;
        cnt++;
    }

    Node *nodeToInsert = new Node(d);

    if(temp -> next == NULL ) {
        tail -> next = nodeToInsert;
        tail = nodeToInsert;
        return;
    }

    
    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;

}

void deleteNode(Node* &head, Node* &tail, int pos) {

    // deleting first node
    if(pos == 1) {

        Node* temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;

        // if list became empty
        if(head == NULL) {
            tail = NULL;
        }

    } else {

        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;

        while(cnt < pos) {
            previous = current;
            current = current->next;
            cnt++;
        }

        // if deleting last node
        if(current->next == NULL) {
            tail = previous;
        }

        previous->next = current->next;

        current->next = NULL;

        delete current;
    }
}

void print (Node* &head ) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(2);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;


    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 65);
    print(head);

    cout << "head's data  = " << head -> data << endl;
    cout << "tail's data  = " << tail -> data << endl;
    
    deleteNode (head, tail, 4);
    print(head);

    cout << "head's data  = " << head -> data << endl;
    cout << "tail's data  = " << tail -> data << endl;

    return 0;
}