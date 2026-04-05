// Each player has permutation of 1..n
// If A[i] > B[i], Player A gets point
// If A[i] < B[i], Player B gets point
// Equal, No points

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if(a == 0 && b == 0) {
            cout << "YES" << endl;
            for(int i = 1; i <= n; i++) cout << i << " ";
            cout << endl;
            for(int i = 1; i <= n; i++) cout << i << " ";
            cout << endl;
            continue;
        }
        if(a == 0 || b == 0 || a + b > n) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
        int offset = n - a - b;
        for(int i = 1; i <= offset; i++) cout << i << " ";
        for(int i = offset + a + 1; i <= n; i++) cout << i << " ";
        for(int i = offset + 1; i <= offset + a; i++) cout << i << " ";
        cout << endl;
    }
}