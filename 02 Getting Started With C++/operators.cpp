#include <iostream>
using namespace std;

int main() {

    // ===============================
    // ARITHMETIC OPERATORS
    // ===============================
    int a = 10;
    int b = 3;

    cout << "Arithmetic Operators" << endl;
    cout << "a + b = " << a + b << endl;   // addition
    cout << "a - b = " << a - b << endl;   // subtraction
    cout << "a * b = " << a * b << endl;   // multiplication
    cout << "a / b = " << a / b << endl;   // division (int division)
    cout << "a % b = " << a % b << endl;   // modulus (remainder)

    // ===============================
    // RELATIONAL OPERATORS
    // ===============================
    cout << "\nRelational Operators" << endl;

    cout << "a == b : " << (a == b) << endl;  // equal to
    cout << "a != b : " << (a != b) << endl;  // not equal
    cout << "a > b  : " << (a > b) << endl;   // greater than
    cout << "a < b  : " << (a < b) << endl;   // less than
    cout << "a >= b : " << (a >= b) << endl;  // greater than or equal
    cout << "a <= b : " << (a <= b) << endl;  // less than or equal

    // ===============================
    // LOGICAL OPERATORS
    // ===============================
    bool x = true;
    bool y = false;

    cout << "\nLogical Operators" << endl;

    cout << "x && y : " << (x && y) << endl;  // logical AND
    cout << "x || y : " << (x || y) << endl;  // logical OR
    cout << "!x     : " << (!x) << endl;      // logical NOT

    return 0;
}
