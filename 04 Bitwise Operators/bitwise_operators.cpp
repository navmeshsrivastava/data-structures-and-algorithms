#include <iostream>
using namespace std;

int main() {

    int a = 5;   // 5  -> 0101 (binary)
    int b = 3;   // 3  -> 0011 (binary)

    /*
        Binary representation:

        a = 5  -> 0101
        b = 3  -> 0011
    */

    // Bitwise AND (&)
    // 0101
    // 0011
    // ----
    // 0001  -> 1
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR (|)
    // 0101
    // 0011
    // ----
    // 0111  -> 7
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR (^)
    // 0101
    // 0011
    // ----
    // 0110  -> 6
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT (~)
    // a = 5 -> 00000000 00000000 00000000 00000101
    // ~a    -> 11111111 11111111 11111111 11111010
    // Result = -6 (2's complement)
    cout << "~a = " << (~a) << endl;

    return 0;
}
