#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int E() {
	long long  n;
	cin >> n;
	vector<long long> a(n);
	bool even = false;
	bool odd = false;
	for (long long i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			even = true;
		}
		else {
			odd = true;
		}
	}

	if (even && odd) {
		sort(a.begin(), a.end());
	}
	
	for (long long i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}