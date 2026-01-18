#include <iostream>
using namespace std;

int main() {

    // ===============================
    // IMPLICIT TYPECASTING
    // ===============================
    // Smaller data type is automatically
    // converted into larger data type

    int a = 10;
    double b = a;   // int -> double

    cout << "Implicit casting (int to double): " << b << endl;

    // ===============================
    // EXPLICIT TYPECASTING
    // ===============================
    // Programmer forces conversion

    double x = 9.8;
    int y = (int)x;   // double -> int (decimal part lost)

    cout << "Explicit casting (double to int): " << y << endl;

    // ===============================
    // TYPECASTING IN EXPRESSIONS
    // ===============================

    int p = 5;
    int q = 2;

    double result1 = p / q;           // int / int -> int
    double result2 = (double)p / q;   // double / int -> double & also float / int -> float

    cout << "Without typecasting: " << result1 << endl;
    cout << "With typecasting: " << result2 << endl;

    // ===============================
    // CHAR TO INT (ASCII)
    // ===============================

    char ch = 'A';
    int ascii = (int)ch;

    cout << "ASCII value of A: " << ascii << endl;

    // ===============================
    // INT TO CHAR
    // ===============================

    int num = 66;
    char letter = (char)num;

    cout << "Character of ASCII 66: " << letter << endl;

    return 0;
}
