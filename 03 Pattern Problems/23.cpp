// 1       2       3       4
//         2       3       4
//                 3       4
//                         4
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
        int num = i;
        while (num <= n)
        {
            cout << num << "\t";
            num++;
        }
        cout << endl;
        i++;
        
        
    }
    

    return 0;
}