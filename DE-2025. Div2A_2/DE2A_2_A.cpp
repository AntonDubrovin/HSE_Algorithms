#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int A() {
	string str;
	cin >> str;
	vector<int> numbers;
	for (char c : str) {
		if (c != '+') {
			numbers.push_back(c - '0');
		}
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < numbers.size() - 1; ++i) {
		cout << numbers[i] << '+';
	}
	cout << numbers[numbers.size() - 1];
	return 0;
}