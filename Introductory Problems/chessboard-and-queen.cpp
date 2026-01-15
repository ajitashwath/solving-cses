// Place eight queens on a chessboard so that no two queens are attacking each other.
// Each square is either free or reserved, and you can only place queens on free squares.

#include <bits/stdc++.h>
using namespace std;

vector<string> board(8);
bool col[8], diag1[15], diag2[15];
int ans = 0;

void backtrack(int r) {
    if(r == 8) {
        ans++;
        return;
    }

    for(int c = 0; c < 8; c++) {
        if(board[r][c] == '.' && !col[c] && !diag1[r + c] && !diag2[r - c + 7]) {
            col[c] = diag1[r + c] = diag2[r - c + 7] = true;
            backtrack(r + 1);
            col[c] = diag1[r + c] = diag2[r - c + 7] = false;
        }
    }
}

int main() {
    for(int i = 0; i < 8; i++) cin >> board[i];
    backtrack(0);
    cout << ans << endl;
    return 0;
}