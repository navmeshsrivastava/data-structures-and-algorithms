#include <iostream>
using namespace std;

/*
    Function: isPresent
    Purpose:  Check if a target element exists in a 3x3 2D array
    Params:
        arr    -> 2D array (fixed column size required in C++)
        target -> element to search
        rows   -> number of rows
        cols   -> number of columns
    Return:
        true  -> if element found
        false -> otherwise
*/
bool isPresent(int arr[][3], int target, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

void printRowSum(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;

        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }

        cout << "Sum of row " << i << " = " << sum << endl;
    }
}

void printColSum(int arr[][3], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        int sum = 0;

        for (int j = 0; j < rows; j++) {
            sum += arr[j][i];
        }

        cout << "Sum of Column " << i << " = " << sum << endl;
    }
}

int main() {

    // Predefined 2D array
    int arr1[3][3] = {
        {1, 11, 111},
        {2, 22, 222},
        {3, 33, 333}
    };

    // Print arr1
    cout << "Predefined Array (arr1):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Declare another 2D array
    int arr[3][3];

    // -------------------------------
    // Input: Row-wise
    // -------------------------------
    cout << "\nEnter elements (row-wise):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Output: Row-wise
    cout << "\nArray after row-wise input:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // -------------------------------
    // Input: Column-wise
    // -------------------------------
    cout << "\nEnter elements (column-wise):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[j][i];
        }
    }

    // Output after column-wise input
    cout << "\nArray after column-wise input:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // -------------------------------
    // Search operation
    // -------------------------------
    cout << "\nEnter the element to search in arr1: ";
    int target;
    cin >> target;

    if (isPresent(arr1, target, 3, 3)) {
        cout << "Element is present." << endl;
    } else {
        cout << "Element is not found." << endl;
    }

    printRowSum(arr1, 3, 3);

    printColSum(arr1, 3, 3);

    return 0;
}