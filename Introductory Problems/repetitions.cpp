// DNA: String consisting of characters A, C, G, T
// Find longest repetition in sequence (Max length substring containing only one type)

// Only four char: A, C, G, T

#include <bits/stdc++.h>
using namespace std;

int main() {
    string t;
    cin >> t;
    int cnt = 0, ans = 1;
    char a = 'A';
    for(char i : t) {
        if(i == a) {
            cnt++;
            ans = max(cnt, ans);
        } else {
            a = i;
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}