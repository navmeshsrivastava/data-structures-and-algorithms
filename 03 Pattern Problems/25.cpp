// 1       2       3       4       5       5       4       3       2       1
// 1       2       3       4       *       *       4       3       2       1
// 1       2       3       *       *       *       *       3       2       1
// 1       2       *       *       *       *       *       *       2       1
// 1       *       *       *       *       *       *       *       *       1

#include <iostream>
using namespace std;

int main()
{
    int n;
     
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // 1st Part 
        int start = 1;
        while (start <= (n-i+1))
        {
           cout << start << "\t";
           start++;
        }

        // 2nd  Part
        int stars = 2*(i-1);
        while (stars)
        {
            cout << "*\t";
            stars--;
        }

        // 3rd Part 
        int num = n-i+1;
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