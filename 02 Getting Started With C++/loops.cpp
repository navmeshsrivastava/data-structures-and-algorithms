#include <iostream>
using namespace std;

int main() {

    /* ================================
       WHILE LOOP
       ================================ */

    int i = 1;

    // Print numbers from 1 to 5
    while (i <= 5) {
        cout << "i = " << i << endl;
        i++;
    }

    // Example: Sum of first n natural numbers
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int sum = 0;
    int count = 1;

    while (count <= n) {
        sum = sum + count;
        count++;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
