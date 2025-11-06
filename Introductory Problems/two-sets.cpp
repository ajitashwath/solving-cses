// Sum of first n numbers: n(n + 1) / 2

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    if(total % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vector<ll> set1, set2;
    ll target = total / 2;
    for(ll i = n; i >= 1; i--) {
        if(target - i >= 0) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }
    cout << set1.size() << endl;
    for(auto x : set1) cout << x << " ";
    cout << "\n" << set2.size() << endl;
    for(auto x : set2) cout << x << " ";
    cout << endl;
    return 0;
}