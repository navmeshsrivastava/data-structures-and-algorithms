#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    unsigned int onesComp;
    unsigned int twosComp;

    // 1's complement
    onesComp = ~original;

    // 2's complement
    twosComp = onesComp + 1;

    // Print original
    cout << "Binary (32-bit):      ";
    for (int i = 31; i >= 0; i--) {
        cout << ((original >> i) & 1);
    }
    cout << endl;

    // Print 1's complement
    cout << "1's Complement:      ";
    for (int i = 31; i >= 0; i--) {
        cout << ((onesComp >> i) & 1);
    }
    cout << endl;

    // Print 2's complement
    cout << "2's Complement:      ";
    for (int i = 31; i >= 0; i--) {
        cout << ((twosComp >> i) & 1);
    }
    cout << endl;

    return 0;
}
