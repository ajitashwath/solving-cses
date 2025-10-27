// Given array of n ints, want to modify the array so that it is increasing
// Every element is at least as large as previous element

// On each move, you may increase the value of any element by 1

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t, maxx = 0, cnt = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        ll a;
        cin >> a;
        maxx = max(maxx, a);
        cnt += maxx - a;
    }
    cout << cnt << endl;
    return 0;
}