#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
//k = 1 to n
 
int main() {
	ll t;
	cin >> t;
	for(int k = 1; k <= t; ++k) {
		ll a1 = k * k; //k x k
		ll a2 = a1 * (a1 - 1) / 2;
		if(k > 2) {
			a2 -= 4 * (k - 1) * (k - 2);
		}
		cout << a2 << endl;
	}
	return 0;
}