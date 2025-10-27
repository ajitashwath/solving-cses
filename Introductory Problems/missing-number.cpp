// Given all numbers between 1, 2, ... n expect 1.
// Input contains an int n
// Second line contains (n - 1) numbers.

// Constraints: 2 <= n <= 2 * 10^5

// Use formula
// Sum = t * (t + 1) / 2

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t, cnt = 0;
    cin >> t;
    for(int i = 1; i < t; i++) {
        int a;
        cin >> a;
        cnt += a;
    }
    cout << (t * (t + 1)) / 2 - cnt;
    return 0;
}