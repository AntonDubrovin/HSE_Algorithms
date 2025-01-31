#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int A() {
	int q;
	cin >> q;
	string t;
	for (int i = 0; i < q; ++i) {
		cin >> t;
		regex re_ab("ab");
		auto count_ab = distance(
			sregex_iterator(t.begin(), t.end(), re_ab),
			sregex_iterator()
		);

		regex re_ba("ba");
		auto count_ba = distance(
			sregex_iterator(t.begin(), t.end(), re_ba),
			sregex_iterator()
		);

		if (count_ab == count_ba) {
			cout << t << endl;
		}
		else {
			if (count_ab > count_ba) {
				if (t.back() == 'b') {
					t.back() = 'a';
				}
				else {
					t.front() = 'b';
				}
			}
			else {
				if (t.back() == 'a') {
					t.back() = 'b';
				}
				else {
					t.front() = 'a';
				}
			}
			cout << t << endl;
		}
	}
	return 0;
}