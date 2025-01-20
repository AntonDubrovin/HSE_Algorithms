#include <iostream>

using namespace std;

int F() {
	int m, n;
	cin >> m >> n;
	const int a = 2;
	const int b = 1;

	cout << (m * n) / (a * b);
	return 0;
}