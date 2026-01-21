//                         1
//                 1       2       1
//         1       2       3       2       1
// 1       2       3       4       3       2       1

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
        int spc = n-i;
        while (spc)
        {
           cout << "\t";
           spc--;
        }
        // 1st Part
        int j = 1;
        while (j <= i)
        {
            cout << j << "\t";
            j++;
        }
        // 3rd Part
        int num = i-1;
        while (num)
        {
           cout << num << "\t";
           num--;
        }
        
        cout << endl;
        i++;
        
    }
    

    return 0;
}