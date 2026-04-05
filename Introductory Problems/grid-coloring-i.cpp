#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for(int i = 0; i < n; i++) cin >> grid[i];
    vector<string> res = grid;
    string chars = "ABCD";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(char c : chars) {
                if(c == grid[i][j]) continue;
                if(i > 0 && res[i - 1][j] == c) continue;
                if(j > 0 && res[i][j - 1] == c) continue;
                res[i][j] = c;
                break;
            }
        }
    }
    for(auto &row : res) cout << row << endl;
    return 0;
}