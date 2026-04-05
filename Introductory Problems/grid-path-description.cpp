// 88418 paths in 7 x 7 grid
// 48 character description of consisting D, U, L, R

// Start at (0, 0)
// End at (6, 0)
// Exactly 48 moves
// Each cell can be visited at most once

#include <bits/stdc++.h>
using namespace std;

string s;
bool vis[7][7];
int ans = 0;

int dx[4] = {1, -1, 0, 0}; // D, U, R, L
int dy[4] = {0, 0, 1, -1};
char dir[4] = {'D', 'U', 'R', 'L'};

bool inside(int x, int y) {
    return x >= 0 && x < 7 && y >= 0 && y < 7;
}

void dfs(int x, int y, int step) {
    if(x == 6 && y == 0) {
        if(step == 48) ans++;
        return;
    }
    if(step == 48) return;
    
    if(vis[x][y]) return;
    if((x > 0 && x < 6 && !vis[x-1][y] && !vis[x+1][y] && (y == 0 || vis[x][y-1]) && (y == 6 || vis[x][y+1]))) return;
    if((y > 0 && y < 6 && !vis[x][y-1] && !vis[x][y+1] && (x == 0 || vis[x-1][y]) && (x == 6 || vis[x+1][y]))) return;

    vis[x][y] = true;
    for(int i = 0; i < 4; i++) {
        if(s[step] != '?' && s[step] != dir[i]) continue;
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(!inside(nx, ny) || vis[nx][ny]) continue;
        dfs(nx, ny, step + 1);
    }
    vis[x][y] = false;
}

int main() {
    cin >> s;
    dfs(0, 0, 0);
    cout << ans << endl;
}