// Gray Code
// A list of all 2^n bit strings of length n
// Any two successive strings differ in exactly one bit position

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tot = 1 << n; //2^n
    for(int i = 0; i < tot; i++) {
        int gray = i ^ (i >> 1);
        for(int j = n - 1; j >= 0; j--) {
            cout << ((gray >> j) & 1);
        }
        cout << endl;
    }
    return 0;
}