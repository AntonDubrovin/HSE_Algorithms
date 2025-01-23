#include <iostream>
#include <string>
#include <set>

using namespace std;

int D() {
	string str;
	cin >> str;
	set<char> unique_ch;
	for (char c : str) {
		unique_ch.insert(c);
	}
	if (unique_ch.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
	return 0;
}