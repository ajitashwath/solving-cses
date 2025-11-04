// Given a string, we need to generate all different strings
// That can be created using its characters.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> res;
    do {
        res.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << res.size() << endl; // Printing the number of possible strings
    for(const string &i: res) cout << i << endl;
    return 0;
}