#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;

ll modpow(ll a, ll b) {
    ll res = 1;
    a %= MOD;
    while(b > 0) {
        if(b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ll n;
    cin >> n;
    while(n--) {
        ll a, b;
        cin >> a >> b;
        cout << modpow(a, b) << endl;
    }
    return 0;
}
