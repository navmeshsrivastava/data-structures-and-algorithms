#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int cntIdx = 0;

        while ( i < chars.size() ) {

            int j = i+1;

            while (j < chars.size() && chars[i] == chars[j] ) {
                j++;
            }

            chars[cntIdx++] = chars[i];

            int count = j-i;

            if(count > 1) {
                string cnt = to_string(count);
                for (char ch: cnt ) {
                    chars[cntIdx++] = ch;
                }
            }

            i = j;
        }

        return cntIdx;
    }
};