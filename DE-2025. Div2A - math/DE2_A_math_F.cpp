#include <iostream>
#include <string>

using namespace std;

int F() {
	int t;
	cin >> t;

	string x;
	for (int i = 0; i < t; ++i) {
		cin >> x;
		char num = x[0];
		int count = x.size();
		cout << count * (count + 1) / 2 + 10 * (num - '1') << endl;
	}
	return 0;
}