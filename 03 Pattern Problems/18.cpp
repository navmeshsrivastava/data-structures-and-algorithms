//                         *
//                 *       *
//         *       *       *
// *       *       *       *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        
            // For spaces
            int spaces = 1;
            while (spaces <= (n-i))
            {
                cout << "\t";
                spaces++;
            }
            // For stars
            int stars = 1;
            while (stars <= i)
            {
                cout << "*\t";
                stars++;
            }
            j++;
            
            
        
        cout<< endl;
        i++;
    }
    

    return 0;
}