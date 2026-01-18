#include <iostream>
using namespace std;

int main() {

    // ===============================
    // VARIABLES
    // ===============================
    // A variable is a named memory location
    // where we store some value.

    int age = 21;          // stores whole numbers
    float height = 5.7;  // stores decimal numbers (less precise)
    double weight = 49.25; // stores decimal numbers (more precise)
    char grade = 'A';     // stores a single character
    bool isStudent = true; // stores true or false

    // ===============================
    // PRINTING VARIABLES
    // ===============================
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    // ===============================
    // SIZE OF DATA TYPES (in bytes)
    // ===============================
    // sizeof() tells how much memory is used

    cout << "\nSize of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;

    // ===============================
    // SIGNED vs UNSIGNED
    // ===============================

    int a = -10;                // signed int (default)
    unsigned int b = 10;        // unsigned int (only positive)

    cout << "\nSigned int a: " << a << endl;
    cout << "Unsigned int b: " << b << endl;

    // ===============================
    // RANGE EXAMPLES
    // ===============================
    // int is usually 4 bytes = 32 bits
    // signed int range: -2^31 to (2^31 - 1)

    int maxInt = 2147483647;
    int minInt = -2147483648;

    cout << "\nMax int: " << maxInt << endl;
    cout << "Min int: " << minInt << endl;

    // unsigned int range: 0 to (2^32 - 1)
    unsigned int maxUnsignedInt = 4294967295;

    cout << "Max unsigned int: " << maxUnsignedInt << endl;

    // ===============================
    // CHAR DATA TYPE
    // ===============================
    // char internally stores ASCII value

    char ch = 'A'; // ASCII of 'A' is 65

    cout << "\nCharacter: " << ch << endl;
    cout << "ASCII value of A: " << int(ch) << endl;


    return 0;
}
