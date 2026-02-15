// https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5

#include <bits/stdc++.h> 
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

bool checkPalindrome(string s)
{
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

        if (!((check2 >= 48 && check2 <= 57) || 
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