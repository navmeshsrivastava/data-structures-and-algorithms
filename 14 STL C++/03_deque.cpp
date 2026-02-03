#include <bits/stdc++.h>
using namespace std;

// Utility function to print deque
void printDeque(deque<int> dq) {
    for (int x : dq) cout << x << " ";
    cout << endl;
}

int main() {

    /* ===============================
       1. push_back()
       =============================== */
    deque<int> dq1 = {1, 2, 3};

    cout << "Before push_back: ";
    printDeque(dq1);

    dq1.push_back(4);

    cout << "After push_back: ";
    printDeque(dq1);


    /* ===============================
       2. push_front()
       =============================== */
    deque<int> dq2 = {2, 3, 4};

    cout << "\nBefore push_front: ";
    printDeque(dq2);

    dq2.push_front(1);

    cout << "After push_front: ";
    printDeque(dq2);


    /* ===============================
       3. pop_back()
       =============================== */
    deque<int> dq3 = {1, 2, 3, 4};

    cout << "\nBefore pop_back: ";
    printDeque(dq3);

    dq3.pop_back();

    cout << "After pop_back: ";
    printDeque(dq3);


    /* ===============================
       4. pop_front()
       =============================== */
    deque<int> dq4 = {1, 2, 3, 4};

    cout << "\nBefore pop_front: ";
    printDeque(dq4);

    dq4.pop_front();

    cout << "After pop_front: ";
    printDeque(dq4);


    /* ===============================
       5. Accessing Elements
       =============================== */
    deque<int> dq5 = {10, 20, 30, 40};

    cout << "\nAccess using [] : " << dq5[2] << endl;
    cout << "Access using at(): " << dq5.at(1) << endl;


    /* ===============================
       6. Front & Back Elements
       =============================== */
    deque<int> dq6 = {5, 10, 15};

    cout << "\nFront element: " << dq6.front() << endl;
    cout << "Back element: " << dq6.back() << endl;


    /* ===============================
       7. empty()
       =============================== */
    deque<int> dq7;

    if (dq7.empty())
        cout << "\nDeque is empty" << endl;
    else
        cout << "\nDeque is NOT empty" << endl;


    /* ===============================
       8. erase()
       =============================== */
    deque<int> dq8 = {1, 2, 3, 4, 5};

    cout << "\nBefore erase: ";
    printDeque(dq8);

    // erase element at index 2 (value 3)
    dq8.erase(dq8.begin() + 2);

    cout << "After erase index 2: ";
    printDeque(dq8);


    return 0;
}
