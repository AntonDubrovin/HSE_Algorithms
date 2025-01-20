#include <iostream>
#include <cmath>

using namespace std;

int C() {
	long long n, m, a;
	cin >> n >> m >> a;

	cout << ((n + a - 1) / a) * ((m + a - 1) / a);
	return 0;
}