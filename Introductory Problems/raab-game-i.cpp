#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if(a + b > n) {
            cout << "NO\n";
            continue;
        }

        vector<int> p1, p2;
        int ties = n - a - b;

        for(int i = 1; i <= ties; i++) {
            p1.push_back(i);
            p2.push_back(i);
        }

        vector<int> rem;
        for(int i = ties + 1; i <= n; i++) rem.push_back(i);
        int m = rem.size();

        for (int i = 0; i < a; i++) {
            p1.push_back(rem[m - 1 - i]);
            p2.push_back(rem[i]);
        }

        for(int i = 0; i < b; i++) {
            p1.push_back(rem[a + i]);
            p2.push_back(rem[m - 1 - a - i]);
        }

        cout << "YES\n";
        for(int x : p1) cout << x << " ";
        cout << "\n";
        for(int x : p2) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
