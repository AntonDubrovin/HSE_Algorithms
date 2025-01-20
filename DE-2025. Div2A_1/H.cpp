#include <iostream>

using namespace std;

int H() {
	const int n = 5, m = 5;
	const int center_i = 2, center_j = 2;

	int cur_el;
	int ans;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> cur_el;
			if (cur_el == 1) {
				ans = (abs(i - center_i) + abs(j - center_j));
			}
		}
	}
	cout << ans;
	return 0;
}