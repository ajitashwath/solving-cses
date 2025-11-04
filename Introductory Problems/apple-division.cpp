// N apples with known weights
// Divide the apples into two groups
// So that difference b/t weights of groups is minimal.

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> weights[i];
        sum += weights[i];
    }
    ll target = sum / 2;
    vector<char> dp(target + 1, 0);
    dp[0] = true;
    for(int i : weights) {
        for(ll j = target; j >= i; j--) {
            if(dp[j - i]) dp[j] = true;
        }
    }
    ll best = 0;
    for(ll i = target; i >= 0; i--) {
        if(dp[i]) {
            best = i;
            break;
        }
    }
    cout << (sum - 2 * best) << endl;
    return 0;
}