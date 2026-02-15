#include <iostream>
using namespace std;

void reverse ( char name[], int n ) {
    int s = 0, e = n-1;
    while ( s < e ) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char arr[]) {
    int size = 0;
    int i = 0;
    while (arr[i] != '\0') {
        size++;
        i++;
    }
    return size;
}

int main()
{
    char name[20];

    cin >> name;
    // name[3] = '\0';
    cout << name;
    
    cout << getLength(name);
    
    
    reverse(name, getLength(name));
    cout << name;

    return 0;
}