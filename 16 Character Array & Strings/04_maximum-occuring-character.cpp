#include <iostream>
using namespace std;

// Function assumes only lower aplhabets' words without spaces are given.
char maxOccuringChar(string s ) {

    int temp[26] = {0};

    int n = s.size();

    for ( int i = 0; i < n; i++ ) {
        int num = s[i] - 'a';
        temp[num]++;
    }

    int maxi = -1;
    char ans = '\0';
    for ( int i = 0; i < 26; i++ ) {
        if ( temp[i] > maxi ) {
            ans = i + 'a';
            maxi = temp[i];
        }
    }

    return ans;

}

int main()
{
    string s;

    cin >> s;

    cout << "Maximum occuring character in the string is " << maxOccuringChar( s ) << ".";

    return 0;
}