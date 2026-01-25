#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        int m = n;
        int mask = 0;

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Bitwise Complement: " << obj.bitwiseComplement(n) << endl;
    return 0;
}
