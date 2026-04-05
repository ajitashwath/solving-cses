// Sum of first n numbers: n(n + 1) / 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if(sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    long long target = sum / 2;
    vector<int> s1, s2;
    for(int i = n; i >= 1; i--) {
        if(target >= i) {
            s1.push_back(i);
            target -= i;
        } else s2.push_back(i);
    }
    cout << s1.size() << endl;
    for(int i : s1) cout << i << " ";
    cout << endl;
    cout << s2.size() << endl;
    for(int i : s2) cout << i << " ";
    cout << endl;
    return 0;
} 