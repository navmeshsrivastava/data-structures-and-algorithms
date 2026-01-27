#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int size = arr.size();

    vector<int> arrCopy(size);

    int indexForArrCopy = 0;

    // Count occurrences of each element
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        arrCopy[indexForArrCopy] = count;
        indexForArrCopy++;
    }

    // Check if all occurrence counts are unique
    for (int i = 0; i < size; i++) {
        int total = 0;
        for (int j = 0; j < size; j++) {
            if (arrCopy[i] == arrCopy[j])
                total++;
        }
        if (arrCopy[i] != total)
            return false;
    }

    return true;
}

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    // Expected output: true (counts are 3,2,1)

    if (uniqueOccurrences(arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
