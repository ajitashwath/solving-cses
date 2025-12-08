// Each coin has a positive integer value
// Calculate the number of distinct ways you can produce a money sum x

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int &i : coins) cin >> i;
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= x; i++) {
        for(int c : coins) {
            if(i - c >= 0) dp[i] = (dp[i] + dp[i - c]) % MOD;
        }
    }
    cout << dp[x] << endl;
    return 0;
}