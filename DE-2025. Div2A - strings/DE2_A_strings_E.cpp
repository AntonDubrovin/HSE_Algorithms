#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


using namespace std;

int E() {
	string name1;
	string name2;
	string names;
	cin >> name1;
	cin >> name2;
	cin >> names;

	const int alphabet_size = 26;
	int alphabet1[alphabet_size] = { 0 };
	for (int i = 0; i < name1.size(); ++i) {
		char cur_el = name1[i] - '0' - 17;
		alphabet1[cur_el]++;
	}
	for (int i = 0; i < name2.size(); ++i) {
		char cur_el = name2[i] - '0' - 17;
		alphabet1[cur_el]++;
	}

	int alphabet2[alphabet_size] = { 0 };
	for (int i = 0; i < names.size(); ++i) {
		char cur_el = names[i] - '0' - 17;
		alphabet2[cur_el]++;
	}

	for (int i = 0; i < alphabet_size; ++i) {
		if (alphabet1[i] != alphabet2[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}