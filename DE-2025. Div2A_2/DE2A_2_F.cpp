#include <iostream>

using namespace std;

int F() {
	int n;
	cin >> n;
	int x, y, z;
	int x_res = 0;
	int y_res = 0;
	int z_res = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y >> z;
		x_res += x;
		y_res += y;
		z_res += z;
	}

	if (x_res == 0 && y_res == 0 && z_res == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}