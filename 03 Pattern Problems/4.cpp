// For n = 3
// 1    2    3
// 4    5    6
// 7    8    9

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1, num = 1;

    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout << num << "\t";
            num++;
            col++;
        }
        cout << endl;
        row++;
        
    }
    

    return 0;
}