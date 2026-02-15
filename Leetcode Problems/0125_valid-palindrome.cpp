// https://leetcode.com/problems/valid-palindrome/description/

#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, e = s.size() - 1;

    while (st < e) {

        int check1 = s[st];
        int check2 = s[e];

        if (!((check1 >= 48 && check1 <= 57) ||
              (check1 >= 65 && check1 <= 90) || 
              (check1 >= 97 && check1 <= 122))) {
            st++;
            continue;
        }

        if (!( (check2 >= 48 && check2 <= 57) ||
              (check2 >= 65 && check2 <= 90) || 
              (check2 >= 97 && check2 <= 122))) {
            e--;
            continue;
        }

        if (tolower(s[st]) == tolower(s[e])) {
            st++;
            e--;
        } else {
            return false;
        }
    }

    return true;
    }
};