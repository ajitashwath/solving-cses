#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long y, x;
		cin >> y >> x;
		long long z = max(y, x);
		long long z2 = (z - 1) * (z - 1), ans;
		if(z % 2) {
			if(y == z) ans = z2 + x;
			else ans = z2 + 2 * z - y;
		} else {
			if(x == z) ans = z2 + y;
			else ans = z2 + 2 * z - x;
		}
		cout << ans << endl;
	}
	return 0;
}