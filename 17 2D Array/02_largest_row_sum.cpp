#include <iostream>
#include <climits>
using namespace std;

int largestRowSum( int arr[][4], int row, int col ) {
    int maxi = INT_MIN;
    int largestRow = -1;
    
    for( int i = 0; i < row; i++ ) {
        int sum = 0;
        for ( int j = 0; j < col; j++ ) {
            sum+=arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            largestRow = i;
        }
    }

    cout << "The maximum sum is " << maxi << " ";

    return largestRow;
}

int main()
{
    int arr[3][4] = {{12,54,23,22}, {31,29,15,79}, {32,41,0,1}};

    cout << " of the row " << largestRowSum(arr, 3, 4) << "." << endl;

    return 0;
}