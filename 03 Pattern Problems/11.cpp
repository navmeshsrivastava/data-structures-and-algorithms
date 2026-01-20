// For n = 3
// A    B     C   
// A    B     C   
// A    B     C   


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1; 
    while (row<=n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch << "\t";
            col++;
        }
        cout << endl;
        row++;
        
    }
    

    return 0;
}