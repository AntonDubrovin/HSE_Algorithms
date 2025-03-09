#include <iostream>
#include <cmath>

using namespace std;

int B() {
	int t;
	cin >> t;

	int x, y;
	for (int i = 0; i < t; ++i) {
		cin >> x >> y;

		int ans = 0;
		while (y > 0) {
			if (y < x) {
				ans += y;
				break;
			}

			int p = 0;
			while (x * pow(10, p + 1) <= y) {
				p++;
			}
			int cur_minus_val = x * pow(10, p);
			ans += y / cur_minus_val;
			y %= cur_minus_val;
		}
		cout << ans << endl;
	}
	return 0;
}