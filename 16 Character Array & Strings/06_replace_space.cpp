#include <string>
using namespace std;

string replaceSpaces(string &str) {

    int spaceCount = 0;

    for (char ch : str)
        if (ch == ' ')
            spaceCount++;

    int oldSize = str.size();
    str.resize(oldSize + 2 * spaceCount);

    int i = oldSize - 1;
    int j = str.size() - 1;

    while (i >= 0) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
        i--;
    }

    return str;
}
