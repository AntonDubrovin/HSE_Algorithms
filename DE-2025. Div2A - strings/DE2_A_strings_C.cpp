#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int C() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	const int alphabet_size = 26;
	for (int i = 0; i < alphabet_size; ++i) {
		char letter = 'a' + i;
		if (str.find(letter) != string::npos) {
			continue;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}