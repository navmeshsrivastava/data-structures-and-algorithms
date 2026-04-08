#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter no. of rows: " << endl;
    cin >> rows;
    cout << "Enter no. of columns: " << endl;
    cin >> cols;

    int **arr = new int *[rows];
    for ( int i = 0; i < rows; i++ ) {
        arr[i] = new int[cols];
    };

    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            cout << "Enter the element at index["<< i << "][" << j << "]: " << endl;
            cin >> arr[i][j];
        }
    }

    for ( int i = 0; i < rows; i++ ) {
        for (int j = 0; j < cols; j++ ) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}