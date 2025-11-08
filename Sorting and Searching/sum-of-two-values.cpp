// Find two values (at distinct positions) whose sum is equal to x.

// Approach
// Using hash map

// Traverse the array once
// For each element a[i], check if (x - a[i]) exists in map
    // If exists, we found our pair
    // If not, store current element and its index in map

// If no pair is found, print "IMPOSSIBLE"

#include <bits/stdc++.h>
#define ll long long
using namespace std;;

int main() {
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while(left < right) {
        ll sum = arr[left].first + arr[right].first;
        if(sum == x) {
            cout << arr[left].second << " " << arr[right].second << endl;
            return 0;
        }
        if(sum < x) left++;
        else right--;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}