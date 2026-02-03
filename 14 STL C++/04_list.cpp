#include <bits/stdc++.h>
using namespace std;

// Utility function to print list
void printList(list<int> lst) {
    for (int x : lst) cout << x << " ";
    cout << endl;
}

 int main() {

    /* ===============================
       1. Declaration & Initialization
       =============================== */
    list<int> l1 = {1, 2, 3, 4};

    cout << "Initialized list: ";
    printList(l1);


    /* ===============================
       2. Pushing Elements
       =============================== */
    list<int> l2;

    cout << "\nBefore push: ";
    printList(l2);

    l2.push_back(10);
    l2.push_front(5);

    cout << "After push_front & push_back: ";
    printList(l2);


    /* ===============================
       3. Erase Elements
       =============================== */
    list<int> l3 = {1, 2, 3, 4, 5};

    cout << "\nBefore erase: ";
    printList(l3);

    // Erase using iterator (remove 3)
    auto it = l3.begin();
    advance(it, 2);   // move iterator to 3
    l3.erase(it);

    cout << "After erase element 3: ";
    printList(l3);


    /* ===============================
       4. Size of List
       =============================== */
    list<int> l4 = {10, 20, 30};

    cout << "\nList elements: ";
    printList(l4);

    cout << "Size of list: " << l4.size() << endl;


    /* ===============================
       5. Copy One List to Another
       =============================== */
    list<int> original = {7, 8, 9};

    list<int> copyList(original);

    cout << "\nCopied list: ";
    printList(copyList);


    /* ===============================
       6. Create List with All Elements = 5
       =============================== */
    list<int> l5(6, 5);   // size = 6, value = 5

    cout << "\nList with all elements = 5: ";
    printList(l5);


    return 0;
}
