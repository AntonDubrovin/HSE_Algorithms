#include <iostream>

using namespace std;

int E() {
	int a, b;
	cin >> a >> b;
	int years = 0;
	while (a <= b) {
		a *= 3;
		b *= 2;
		years++;
	}
	cout << years;
	return 0;
}