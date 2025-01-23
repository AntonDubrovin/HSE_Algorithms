#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int J() {
	string s;
	cin >> s;
	int upperCount = count_if(s.begin(), s.end(), [](char c) {
		return isupper(c);
		});
	int lowerCount = count_if(s.begin(), s.end(), [](char c) {
		return islower(c);
		});
	if (upperCount > lowerCount) {
		transform(s.begin(), s.end(), s.begin(), [](char c) {
			return toupper(c);
			});
	}
	else {
		transform(s.begin(), s.end(), s.begin(), [](char c) {
			return tolower(c);
			});
	}
	cout << s;
	return 0;
}