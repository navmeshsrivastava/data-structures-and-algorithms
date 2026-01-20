// 1   2   3   4
// 1   2   3   4
// 1   2   3   4
// 1   2   3   4

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << col << "\t";
            col++;
        }
        cout << "\n";
        row++;
        
    }
    

    return 0;
}