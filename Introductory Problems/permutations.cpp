// A permutation of integers 1, 2, ... n is called beautiful if there are no adjacent elements whose difference is 1.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    // Even numbers
    for(int i = 2; i <= n; i += 2) cout << i << " ";
    // Odd numbers
    for(int i = 1; i <= n; i += 2) cout << i << " ";
    cout << endl;
    return 0;
}