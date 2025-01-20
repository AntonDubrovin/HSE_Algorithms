#include <iostream>
#include <string>

using namespace std;

int B() {
	int n;
	cin >> n;
	string str;
	const int MAX_LEN = 10;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		if (str.size() > MAX_LEN) {
			cout << str.front() << str.size() - 2 << str.back() << '\n';
		}
		else {
			cout << str << '\n';
		}
	}
	return 0;
}