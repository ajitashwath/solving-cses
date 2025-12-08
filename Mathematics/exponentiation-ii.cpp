#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const long long PHI = MOD - 1;

long long modpow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while(exp > 0) {
        if(exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        long long a, b, c;
        cin >> a >> b >> c;
        // e = b^c mod (MOD - 1)
        long long e = modpow(b, c, PHI);
        long long ans;
        if(a == 0) {
            if(e == 0) ans = 1; // 0 ^ 0 = 1
            else ans = 0;
        } else ans = modpow(a, e, MOD);
        cout << ans << endl;
    }
    return 0;
}
