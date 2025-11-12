// Size of the map is n x m squares, and each square is either floor or wall

// Approach
// Treat the grid as a graph
// Each floor square is a node, and edges connect adjacent floor cells
// Count how many connected components 
// Use either DFS or BFS to mark visited cells

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool is_valid(int x, int y) {
    return (x >= 0) && (x < n) && (y >= 0) && (y < m) && (grid[x][y] == '.') && !visited[x][y];
}

void dfs(int x, int y) {
    visited[x][y] = true;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(is_valid(nx, ny)) dfs(nx, ny);
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++) cin >> grid[i];
    visited.assign(n, vector<bool>(m, false));

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.' && !visited[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}