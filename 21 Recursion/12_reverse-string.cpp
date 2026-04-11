#include <iostream>
using namespace std;

void reverse( string &str, int i, int j) {
    if(i > j) return;

    swap(str[i], str[j]);

    i++;
    j--;
    return reverse( str, i, j);
}

int main()
{
    string str = "navmesh";

    reverse(str, 0, str.length()-1);

    cout << str << endl;


    return 0;
}