#include <bits/stdc++.h>
using namespace std;

int main() {

    /* ===============================
       1. Declaration & Initialization
       =============================== */

    vector<int> v1;                    // empty vector
    vector<int> v2(5);                 // size 5, values = 0
    vector<int> v3(5, 10);              // size 5, all values = 10
    vector<int> v4 = {1, 2, 3, 4, 5};    // initializer list
    vector<int> v5(v4);                // copy constructor

    /* ===============================
       2. Size vs Capacity
       =============================== */

    cout << "Initial size: " << v1.size() << endl;
    cout << "Initial capacity: " << v1.capacity() << endl;

    // Adding elements to observe capacity growth
    for (int i = 1; i <= 8; i++) {
        v1.push_back(i);
        cout << "After push " << i
             << " -> Size: " << v1.size()
             << ", Capacity: " << v1.capacity() << endl;
    }

    /* ===============================
       3. Accessing Elements
       =============================== */

    cout << "Element at index 2: " << v4[2] << endl;
    cout << "Using at(): " << v4.at(3) << endl;

    /* ===============================
       4. Front & Back
       =============================== */

    cout << "Front element: " << v4.front() << endl;
    cout << "Back element: " << v4.back() << endl;

    /* ===============================
       5. Push Back & Pop Back
       =============================== */

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "After push_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    /* ===============================
       6. Clear Operation
       =============================== */

    cout << "Before clear -> Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;

    v.clear();

    cout << "After clear -> Size: " << v.size()
         << ", Capacity: " << v.capacity() << endl;

    /* ===============================
       7. Iterators
       =============================== */

    vector<int> itVec = {5, 10, 15, 20};

    cout << "Using iterator: ";
    for (auto it = itVec.begin(); it != itVec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    /* ===============================
       8. Copying One Vector to Another
       =============================== */

    vector<int> original = {1, 2, 3};
    
    // Method 1: Copy constructor
    vector<int> copy1(original);

    // Method 2: Assignment operator
    vector<int> copy2;
    copy2 = original;

    cout << "Copied vector: ";
    for (int x : copy2) cout << x << " ";
    cout << endl;

    return 0;
}
