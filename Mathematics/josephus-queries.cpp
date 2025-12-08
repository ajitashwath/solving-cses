// There are n children (numbered from 1, 2 to n) in a circle.
// Every second child is removed from circle until there are no children left.

#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int64 kthRemoved(int64 n, int64 k) {
    if (n == 1) return 1;
    int64 l = n / 2;        
    if (k <= l) return 2 * k;   
    int64 m = n - l;            
    int64 t = k - l;            
    if((n % 2) == 0) return 2 * kthRemoved(m, t) - 1;
    else {
        if(t == 1) return 1;
        return 2 * kthRemoved(m - 1, t - 1) + 1;
    }
}

int main() {
    int q;
    cin >> q;
    while(q--) {
        int64 n, k;
        cin >> n >> k;
        cout << kthRemoved(n, k) << endl;
    }
    return 0;
}
