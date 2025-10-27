// If n is even, the algorithm divides it by 2
// If n is odd, the algorithm multiplies it by 3 and adds 1
// The algorithm repeats this until n is 1

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    cout << t; 
    while(t > 1) {
        if(t % 2 == 0) t /= 2;
        else t = 3 * t + 1;
        cout << " " << t;
    }
    return 0;
}
