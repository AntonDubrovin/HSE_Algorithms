#include <iostream>
#include <string>

using namespace std;

int G() {
	int n;
	cin >> n;

	string cur_op;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> cur_op;
		if (cur_op.front() == '+' || cur_op.back() == '+') {
			++ans;
		}
		else {
			--ans;
		}
	}
	cout << ans;
	return 0;
}