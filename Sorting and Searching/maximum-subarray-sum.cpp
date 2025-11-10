// Find the maximum sum of values in a contiguous, non empty subarray

// Approach
// Kadane's Algorithm

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    ll max_sum = arr[0], curr_sum = arr[0];
    for(int i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    cout << max_sum << endl;
    return 0;
}