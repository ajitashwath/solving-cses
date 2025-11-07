// Apartment allocation problem
// Classic two pointer greedy approach with O(m + n)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<ll> applicants(n), apartments(m);
    for(int i = 0; i < n; i++) cin >> applicants[i];
    for(int i = 0; i < m; i++) cin >> apartments[i];

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m) {
        if(abs(applicants[i] - apartments[j]) <= k) {
            cnt++;
            i++;
            j++;
        } else if(apartments[j] < applicants[i] - k) {
            j++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}