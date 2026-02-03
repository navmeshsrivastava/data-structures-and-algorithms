#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. Declaration & Initialization
    array<int, 5> arr = {10, 20, 30, 40, 50};

    // 2. Access elements
    cout << "Element at index 2: " << arr[2] << endl;
    cout << "Using at(): " << arr.at(3) << endl;

    // 3. First and Last element
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    // 4. Size of array
    cout << "Size: " << arr.size() << endl;

    // 5. Check empty
    cout << "Is empty? " << arr.empty() << endl;

    return 0;
}
