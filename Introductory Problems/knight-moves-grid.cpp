// A knight on an n x n chessboard
// Find the minimum number of moves
// To get from square (r1, c1) to (r2, c2)

// Create a dist[n][n] initialized to -1
// Start BFS from (0, 0)
// For each cell, try all 8 knight moves
// If inside the board and unvisited -> update distance
// Print the matrix

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n, -1));
    int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
    int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

    queue<pair<int,int>> q;
    q.push({0, 0});
    dist[0][0] = 0;
    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for(int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << dist[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
