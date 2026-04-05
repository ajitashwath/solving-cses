#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> f(26, 0);
    for(char c : s) f[c - 'A']++;
    int mx = *max_element(f.begin(), f.end());
    if(mx > (n + 1) / 2) {
        cout << -1 << endl;
        return 0;
    }
    string res = "";
    for(int i = 0; i < n; i++) {
        for(int c = 0; c < 26; c++) {
            if(f[c] == 0) continue;
            if(!res.empty() && res.back() == (char)(c + 'A')) continue;
            f[c]--;
            int rem = n - i - 1;
            int mx2 = *max_element(f.begin(), f.end());
            if(mx2 <= (rem + 1) / 2) {
                res += (char)(c + 'A');
                break;
            }
            f[c]++;
        }
    }
    cout << res << endl;
    return 0;
}