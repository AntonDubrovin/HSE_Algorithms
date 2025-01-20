#include <iostream>

using namespace std;

int D() {
	int n;
	cin >> n;

	int ans = 0;
	int nalog;
	for (int i = 0; i < n; ++i) {
		int nalog_i = 0;
		for (int j = 0; j < 3; ++j) {
			cin >> nalog;
			nalog_i += nalog;
		}
		if (nalog_i > 1) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}