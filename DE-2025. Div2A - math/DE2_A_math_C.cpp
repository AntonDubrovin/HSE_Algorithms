#include <iostream>

using namespace std;

int C() {
	int t;
	cin >> t;

	long long n;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		while (n % 2 == 0) {
			n /= 2;
		}
		if (n != 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}