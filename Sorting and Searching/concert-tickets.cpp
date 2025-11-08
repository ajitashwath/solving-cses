// n concert tickets available with a certain price
// m customers arrive, one after another

// Approach
// Use a multiset to store ticket prices
// It keeps elements sorted and allows duplicates

// For each customer, find the largest ticket price <= their max price (upper_bound())
// If found, print it and remove it from set
// If not found, print -1

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<ll> tickets;
    tickets.clear();
    for (int i = 0; i < n; i++) {
        ll h; 
        cin >> h;
        tickets.insert(h);
    }
    vector<ll> customers(m);
    for(int i = 0; i < m; i++) cin >> customers[i];
    for(int i = 0; i < m; i++) {
        ll x = customers[i];
        auto it = tickets.upper_bound(x);
        if(it == tickets.begin()) cout << -1 << endl;
        else {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}
