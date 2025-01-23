#include <iostream>

using namespace std;

int H() {
	int x;
	cin >> x;

	int steps_5 = x / 5;
	int steps_other = x % 5;
	if (steps_other != 0) {
		cout << steps_5 + 1;
	}
	else {
		cout << steps_5;
	}

	return 0;
}