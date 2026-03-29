#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int total = rows*cols;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows-1;
        int endingCol = cols-1;

        int i = 0;

        while ( i<total ) {

            for (int index = startingCol; i < total && index <= endingCol; index++ ) {
                ans.push_back(matrix[startingRow][index]);
                i++;
            }
            startingRow++;

            for ( int index = startingRow; i < total && index <=endingRow; index++ ) {
                ans.push_back(matrix[index][endingCol]);
                i++;
            }
            endingCol--;

            for ( int index = endingCol; i < total && index >= startingCol; index-- ) {
                ans.push_back(matrix[endingRow][index]);
                i++;
            }
            endingRow--;

            for ( int index = endingRow; i<total && index >=startingRow; index-- ) {
                ans.push_back(matrix[index][startingCol]);
                i++;
            }
            startingCol++;
        }

        return ans;
    }
};