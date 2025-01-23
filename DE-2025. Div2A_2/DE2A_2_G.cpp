#include <iostream>
#include <regex>
#include <string>

using namespace std;

int G() {
	string str;
	cin >> str;
	regex pattern("1{7,}|0{7,}");
	if (regex_search(str, pattern)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}