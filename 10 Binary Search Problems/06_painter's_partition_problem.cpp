// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <vector>
using namespace std;

int isPossible(vector<int> &board, int k, int n, int mid){
    int painterCnt = 1, boards = 0;

    for (int i = 0; i < n; i++ ){
        if(board[i] + boards <= mid) {
            boards+=board[i];
        } else {
            painterCnt++;
            
            if(painterCnt >k || board[i]> mid) {
                return false;
            }
            boards = board[i];
        }
    }
}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int s = 0, ans = -1, sum = 0, n = boards.size();

   for ( int i = 0; i < n; i++ ) {
       sum+=boards[i];
   }

   int e = sum;

   while ( s<= e ) {

       int mid = s + (e-s)/2;

       if(isPossible(boards, k, n, mid)) {
           ans = mid;
           e = mid -1 ;
       } else {
           s = mid+1;
       }
   }

   return ans;
}