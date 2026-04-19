#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
    
    private:
    
    bool isSafe(vector<vector<int>>& maze, int x, int y, vector<vector<int>>& visited, int n ) {
        if((x >= 0 && x < n ) && (y >=0 && y < n ) && visited[x][y] == 0 &&  maze[x][y] == 1 ) {
            return true;
        }
        return false;
    }
    void solve (vector<vector<int>>& maze, int x, int y, string path, vector<vector<int>>& visited,
                vector<string>& ans, int n) {
                    if((x == n-1) && (y == n-1) ) {
                        ans.push_back(path);
                        return;
                    }
                    
                    visited[x][y] = 1;
                    // Downwards
                    int newx = x+1;
                    int newy = y;
                    if(isSafe(maze, newx, newy, visited, n)) {
                        path.push_back('D');
                        solve(maze, newx, newy, path, visited, ans, n);
                        path.pop_back();
                    }
                    // Leftwards
                    newx = x;
                    newy = y-1;
                    if(isSafe(maze, newx, newy, visited, n)) {
                        path.push_back('L');
                        solve(maze, newx, newy, path, visited, ans, n);
                        path.pop_back();
                    }
                    // Rightwards
                    newx = x;
                    newy = y+1;
                    if(isSafe(maze, newx, newy, visited, n)) {
                        path.push_back('R');
                        solve(maze, newx, newy, path, visited, ans, n);
                        path.pop_back();
                    }
                    // Upwards
                    newx = x-1;
                    newy = y;
                    if(isSafe(maze, newx, newy, visited, n)) {
                        path.push_back('U');
                        solve(maze, newx, newy, path, visited, ans, n);
                        path.pop_back();
                    }
                        
                    visited[x][y] = 0;
                }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        if(maze[0][0] == 0) return ans;
        string path = "";
        int srcx = 0, srcy = 0;
        int n = maze.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));
        
        solve(maze, srcx, srcy, path, visited, ans, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};