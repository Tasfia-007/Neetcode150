//Graphs 
//Here is the link 
//     https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    void bfs(vector<vector<char>>& grid, int r, int c, int i, int j) {
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        grid[i][j] = '0';
        for (int k = 0; k < 4; k++) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= 0 && y >= 0 && x < r && y < c && grid[x][y] == '1') {
                bfs(grid, r, c, x, y);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1') {
                    cnt++;
                    bfs(grid, r, c, i, j);
                }
            }
        }
        return cnt;
    }
};
