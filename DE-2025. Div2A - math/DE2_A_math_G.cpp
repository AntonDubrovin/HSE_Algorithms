#include <iostream>

using namespace std;

int G() {
	int t;
	cin >> t;

	int a, b;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		int x = a & b;
		cout << ((a ^ x) ^ (b ^ x)) << endl;
	}
	return 0;
}