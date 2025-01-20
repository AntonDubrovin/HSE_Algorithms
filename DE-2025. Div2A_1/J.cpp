#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int J() {
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	char vowels[] = { 'a', 'o', 'y', 'e', 'u', 'i' };
	str.erase(
		remove_if(str.begin(), str.end(), [&](char c) {
			return find(begin(vowels), end(vowels), c) != end(vowels);
			}), str.end()
				);

	for (char c : str) {
		cout << '.' << c;
	}
	return 0;
}