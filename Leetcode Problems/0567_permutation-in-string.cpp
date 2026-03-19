#include <string>
using namespace std;

class Solution {

private:

    bool checkEqual(int arr1[26], int arr2[26] ) {
        for ( int i = 0; i < 26; i++ ) {
            if (arr1[i] != arr2[i] ) {
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {

        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++ ) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int count2[26] = {0};

        while ( i < s1.length() && i < s2.length() ) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if ( checkEqual( count1, count2 ) ) {
            return 1;
        }

        while ( i < s2.length() ) {
            int index = s2[i] - 'a';
            count2[index]++;
            int toBe0 = s2[i - s1.length() ] - 'a';
            count2[toBe0]--;

            if( checkEqual( count1, count2 )) {
                return 1;
            }

            i++;
        }

        return 0;
        
    }
};