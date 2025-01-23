#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int B() {
	string str;
	cin >> str;

	cout << static_cast<char>(toupper(str[0])) << str.substr(1);
	return 0;
}