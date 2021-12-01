#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;

		vector<int> a(n);
		for (auto &i : a) cin >> i;

		sort(a.begin(), a.end());

		long long ans = 0;
		for (auto &i : a) {
			auto lb = lower_bound(a.begin(), a.end(), l - i);
			auto ub = upper_bound(a.begin(), a.end(), r - i);
			ans += ub - lb;
			ans -= l <= 2 * i && 2 * i <= r;
		}
		ans /= 2;
		cout << ans << endl;
	}
	return 0;
}
