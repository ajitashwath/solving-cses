#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unsigned long long x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<unsigned long long> arr(k);
    unsigned long long curr = 0;
    unsigned long long ans = 0;
    for(int i = 0; i < n; i++) {
        if(i >= k) curr ^= arr[i % k];
        arr[i % k] = x;
        curr ^= x;
        if(i >= k - 1) ans ^= curr;
        x = (a * x + b) % c;
    }
    cout << ans << endl;
}