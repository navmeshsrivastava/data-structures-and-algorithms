#include <iostream>
using namespace std;

bool check( string str1, string str2, int idx ) {
    if(str1.size() != str2.size()) return false;
    if(idx == str1.size()) return true;

    return str1[idx] == str2[idx] && check(str1, str2, idx+1);

}

int main()
{
    string str1 = "abba";
    string str2 = "phpplp";

    if(check(str1, str2, 0)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}