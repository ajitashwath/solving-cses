// Classic Subset Partition
// |x - (S - x)| = |S - 2x|
// |S - 2x| is minimized when x is as close to S/2 as possible

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long ans = LLONG_MAX;
    for(int mask = 0; mask < (1 << n); mask++) {
        long long subset = 0;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) subset += a[i];
            
        }
        ans = min(ans, llabs(total - 2 * subset));
    }
    cout << ans << endl;
    return 0;
}