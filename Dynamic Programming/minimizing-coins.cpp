// Produce a sum of money x using available coins 
// No. of coins is minimal

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];
    const int INF = 1e9;
    vector<int> dp(x + 1, INF);
    dp[0] = 0;
    for(int c : coins) {
        if(c > x) continue;
        for(int s = c; s <= x; ++s) {
            if(dp[s - c] != INF) dp[s] = min(dp[s], dp[s - c] + 1);
        }
    }
    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
    return 0;
}