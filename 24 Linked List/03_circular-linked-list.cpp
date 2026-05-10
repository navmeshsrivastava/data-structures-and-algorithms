#include <iostream>
using namespace std;

class Node { 

    public:
    int data;
    Node* next;

    // constructor
    Node( int d ) {
        this -> data = d;
        this -> next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memmory free for node with data " << val << endl;

    }

};

void insertNode ( Node* &tail, int element, int d) {
    // assuming thet the element is present in the list

    // empty list
    if ( tail == NULL ) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;

    } else {

        // non empty list and assuming list is not empty
        Node* curr = tail;

        while ( curr -> data != element ) {
            curr = curr -> next;
        }

        // element found - current is the node which element equals to
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void print(Node* tail) {

    if(tail == NULL) {
        cout << "List is empty" << endl;
    }
    Node* temp = tail;

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while ( tail != temp );

    cout << endl;
}

void deleteNode (Node* &tail, int value) {

    // empty list
    if(tail == NULL) {
        cout << " List is empty";
        return;
    } else {

        // non empty
        // assuming the value is present
        Node* prev = tail;
        Node* curr = prev -> next;
        

        while ( curr -> data != value ) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // one node linked list
        if(curr = prev) {
            tail = NULL;
        } else if(tail == curr) {
            // >= 2 node linked list
            tail = prev;
        }
        curr -> next = NULL;

        delete curr;
    }
}

int main()
{
    Node* tail = NULL;

    // inserting in empty list
    insertNode( tail, 5, 3 );
    print(tail);

    // insertNode( tail, 3, 10 );
    // print(tail);

    // insertNode( tail, 10, 2 );
    // print(tail);

    // insertNode( tail, 10, 9 );
    // print(tail);

    // insertNode( tail, 9, 21 );
    // print(tail);

    // insertNode( tail, 21, 4 );
    // print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    // deleteNode(tail, 4);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);


    return 0;
}

//  codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118786/offering/1382021