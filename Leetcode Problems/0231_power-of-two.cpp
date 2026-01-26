#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i <= 30; i++) {
            if (n == pow(2, i)) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (obj.isPowerOfTwo(n)) {
        cout << "True (Power of Two)" << endl;
    } else {
        cout << "False (Not a Power of Two)" << endl;
    }

    return 0;
}
