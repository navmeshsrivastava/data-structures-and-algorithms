//                         1
//                 2       2
//         3       3       3
// 4       4       4       4

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
                cout << i << "\t";;
                stars++;
            }
            j++;
            
            
        
        cout<< endl;
        i++;
    }
    

    return 0;
}