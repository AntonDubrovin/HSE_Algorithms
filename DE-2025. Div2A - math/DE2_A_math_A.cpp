#include <iostream>


using namespace std;

int A() {
	int t;
	cin >> t;

	long long n;
	const int c = 2050;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		if (n % c != 0) {
			cout << -1 << endl;
		}
		else {
			int ans = 0;
			while (n > 0) {
				long long max_c = 2050;
				while (max_c * 10 <= n) {
					max_c *= 10;
				}
				n -= max_c;
				++ans;
			}
			cout << ans << endl;
		}
	}
	return 0;
}