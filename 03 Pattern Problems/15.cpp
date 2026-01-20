// For n = 3
// 1
// 2   3
// 4   5   6

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << ch << "\t";
            j++;
            ch++;
        }
        cout << endl;
        i++;
        
    }
    


    return 0;
}