// For n = 3
// A    A    A 
// B    B    B 
// C    C    C   

#include <iostream>
using namespace std;

int main()
{
    #include <iostream>
    using namespace std;
    
    
        int n;
        cin >> n;

        int row = 1;
        // char print = 'A';
        while (row <= n)
        {
            int col = 1;
            while (col <= n)
            {
                char ch = 'A' + row -1;
                cout << ch  << "\t";
                col++;
            }
            cout << endl;
            // print++;
            row++;
            
        }
        
    
        
    return 0;
}