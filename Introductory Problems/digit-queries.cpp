// Digit in Infinite Integer String

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        long long k;
        cin >> k;
        long long len = 1, count = 9, start = 1;
        while(k > len * count) {
            k -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }
        long long num = start + (k - 1) / len;
        int idx = (k - 1) % len;
        cout << to_string(num)[idx] << endl;
    }
    return 0;
}