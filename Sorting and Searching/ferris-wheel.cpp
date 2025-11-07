// Each gondola may have one or two children in it
// The total weight in a gondola may not exceed x.

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> weights(n);
    for(int i = 0; i < n; i++) cin >> weights[i];
    sort(weights.begin(), weights.end());
    int i = 0, j = n - 1;
    int gondolas = 0;
    while(i <= j) {
        if(weights[i] + weights[j] <= x) {
            i++;
            j--;
        } else {
            j--;
        }
        gondolas++;
    }
    cout << gondolas << endl;
    return 0;
}