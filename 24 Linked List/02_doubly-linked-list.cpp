#include <iostream>
using namespace std;

class Node { 

    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node( int d ) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    };

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memmory free for node with data " << val << endl;

    }
};

// traversing a linked list
void print(Node* head) {
    Node* temp = head;

    while ( temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength (Node* head) {
    Node* temp = head;
    int len = 0;

    while ( temp != NULL ) {
        len++;
        temp = temp -> next;
    }

    return len;
}

// inserting at head
void insertAtHead( Node* &head, Node* &tail, int d ) {
    if ( head == NULL ) {

        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    } else {

        Node* temp = new Node(d);

        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

// inserting at tail
void insertAtTail( Node* &head, Node* &tail, int d ) {
    if ( tail == NULL ) {

        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(d);

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

// insert at position
void insertAtPosition ( Node* &head, Node* &tail, int pos, int d ) {

    if(pos < 1 || pos > getLength(head) + 1) {
        cout << "Invalid Position" << endl;
        return;
    }

    if(pos == 1) {
        insertAtHead(head, tail,  d);
        return;
    } 

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos-1) {
        temp = temp -> next;
        cnt++;
    }

    if ( temp -> next == NULL ) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next -> prev = nodeToInsert;

    temp -> next = nodeToInsert; 

    nodeToInsert -> prev = temp;


}

void deleteNode(Node* &head, Node* &tail, int pos) {

    // deleting first node
    if(pos == 1) {

        Node* temp = head;

        temp -> next -> prev = NULL;

        head = temp -> next;

        temp -> next = NULL;

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

        if(current->next != NULL) {
            current->next->prev = previous;
        }

        // isolate current node
        current->next = NULL;
        current->prev = NULL;

        delete current;
    }
}


int main()
{
    // Node* node1 = new Node(10);

    // Node* head = node1;
    // Node* tail = node1;
    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    cout << getLength(head) << endl;

    insertAtHead(head, tail, 19);
    print(head);

    insertAtTail( head, tail, 6);
    print(head);

    insertAtPosition(head, tail, 2, 199);
    print(head);

    insertAtPosition(head, tail, 1, 12);
    print(head);

    insertAtPosition(head, tail, 3, 0);
    print(head);

    deleteNode(head, tail, 5);
    print(head);

    return 0;
}