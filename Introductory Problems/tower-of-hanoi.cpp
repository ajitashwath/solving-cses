// This is a Tower of Hanoi implementation

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> moves;

void solve(int n, int from, int to, int aux) {
    if (n == 0) return;
    solve(n - 1, from, aux, to);
    moves.push_back({from, to});
    solve(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    solve(n, 1, 3, 2);
    cout << moves.size() << endl;
    for (auto &i : moves) cout << i.first << " " << i.second << endl;
    return 0;
}
