// Count the number of ways to construct sum n
// Throwing a dice one or more times

// Each throw produces an outcome between 1 and 6

// Approach
// Dymanic Programming (DP)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int d = 1; d <= 6; d++) {
            if(i - d >= 0) dp[i] = (dp[i] + dp[i - d]) % MOD;
        }
    }
    cout << dp[n] % MOD << endl;
    return 0;
}
