// Construct an n x n grid
// Each square has the smallest non-negative integer (mex)
// That does not appear to left on same row or above on same column

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (i ^ j);
            if(j + 1 < n) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}