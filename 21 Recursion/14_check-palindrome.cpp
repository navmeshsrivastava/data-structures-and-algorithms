#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    if(i>j) return true;

    return str[i] == str[j] && checkPalindrome(str, i+1,j-1);
}

int main()
{
    string str = "racecar";

    if(checkPalindrome(str, 0, str.size()-1)) {
        cout << "Yes";
    } else {
        cout << "No";
    }



    return 0;
}