// 1       1       1       1       1       1
//         2       2       2       2       2
//                 3       3       3       3
//                         4       4       4
//                                 5       5
//                                         6

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // For spaces
        int spc = i-1;
        while (spc)
        {
            cout << "\t";
            spc--;
        }
        // For stars
        int stars = n-i+1;
        while (stars)
        {
            cout << i << "\t";
            stars--;
        }
        cout << endl;
        i++;
        
        
    }
    

    return 0;
}