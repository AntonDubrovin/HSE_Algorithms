#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int C() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int m;
	cin >> n >> m;

	vector<int> l(n);
	vector<int> r(n);
	int cur_l;
	int cur_r;
	for (int i = 0; i < n; ++i) {
		cin >> cur_l >> cur_r;
		l[i] = min(cur_l, cur_r);
		r[i] = max(cur_l, cur_r);
	}

	sort(l.begin(), l.end());
	sort(r.begin(), r.end());

	int dot;
	for (int i = 0; i < m; ++i) {
		cin >> dot;
		auto count_l = upper_bound(l.begin(), l.end(), dot) - l.cbegin();
		auto count_r = lower_bound(r.begin(), r.end(), dot) - r.cbegin();

		cout << count_l - count_r  << " ";
	}
	return 0;
}