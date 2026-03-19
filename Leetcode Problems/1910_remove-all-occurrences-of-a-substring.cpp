#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while ( s.length() != 0 && s.find(part) < s.length() ) {
            s.erase( s.find(part), part.length());
        }
        return s;
    }
};

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while (true) {
            size_t pos = s.find(part);

            if (pos == string::npos)
                break;

            s.erase(pos, part.length());
        }

        return s;
    }
};