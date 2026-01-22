#include <iostream>
using namespace std;

int main() {

    int a = 5;   // 5 -> 0000 0101 (binary)

    /*
        Binary of a = 5

        0000 0101   (5)
    */

    // LEFT SHIFT (<<)
    // a << 1  -> shift bits left by 1 position
    // 0000 0101  -> original
    // 0000 1010  -> after left shift
    // Result = 10  (almost double)

    cout << "a << 1 = " << (a << 1) << endl;

    // a << 2  -> shift bits left by 2 positions
    // 0000 0101  -> original
    // 0001 0100  -> after left shift
    // Result = 20  (5 * 4)

    cout << "a << 2 = " << (a << 2) << endl;

    // RIGHT SHIFT (>>)
    // a >> 1  -> shift bits right by 1 position
    // 0000 0101  -> original
    // 0000 0010  -> after right shift
    // Result = 2  (almost half)

    cout << "a >> 1 = " << (a >> 1) << endl;

    // a >> 2  -> shift bits right by 2 positions
    // 0000 0101  -> original
    // 0000 0001  -> after right shift
    // Result = 1  (5 / 4)

    cout << "a >> 2 = " << (a >> 2) << endl;

    return 0;
}
