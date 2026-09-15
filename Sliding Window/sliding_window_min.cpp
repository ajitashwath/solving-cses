#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    deque<pair<long long, int>> dq;
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        while(!dq.empty() && dq.front().second <= i - k) dq.pop_front();
        while(!dq.empty() && dq.back().first >= x) dq.pop_back();
        dq.push_back({x, i});
        if(i >= k - 1) ans ^= dq.front().first;
        x = (a * x + b) % c;
    }
    cout << ans << endl;
}