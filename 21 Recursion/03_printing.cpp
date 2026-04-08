#include <iostream>
using namespace std;

// tail recursion

void printFromN ( int n ) {
    if( n == 0 ) return;
    cout << n << endl;

    printFromN( n-1 );
}

// head recursion

void printFrom1 ( int n ) {
    if( n == 0 ) return;
    
    printFrom1(n-1);
    cout << n << endl;
}

int main()
{
    int n;

    cin >> n;

    printFromN(n);
    cout << endl;
    printFrom1(n);

    return 0;
}