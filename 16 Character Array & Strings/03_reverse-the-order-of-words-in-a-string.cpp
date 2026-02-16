// https://www.naukri.com/code360/problems/reverse-the-order-of-words-in-a-string_1264991?interviewProblemRedirection=true&search=reverse%20words

#include <string>
using namespace std;

string reverseOrderWords(string str) {

    int s = 0, e = str.size()-1;

    while ( s < e ) {
        swap( str[s++], str[e--] );
    }

    int i = 0, j = 0;
    
    while ( i < str.size() ) {

        while ( i < str.size() && str[i] != ' ') {
            i++;
        };

        s = j, e = i-1;

        while ( s<e ) {
            swap( str[s++], str[e--] );
        }

        i++;
        j = i;
    }

    return str;

}
