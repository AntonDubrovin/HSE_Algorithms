#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A() {
	long long n, k;
	cin >> n >> k;
	vector<long long> a(n);
	for (long long i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	long long mid_index = n / 2;

	long long min_ans = a[mid_index];
	long long max_ans = min_ans + k;

	while (min_ans < max_ans) {
		long long mid = (min_ans + max_ans + 1) / 2;
		long long current_ans_operations = 0;
		for (long long i = mid_index; i < n; i++) {
			if (a[i] < mid) {
				current_ans_operations += (mid - a[i]);
			}
		}
		if (current_ans_operations <= k) {
			min_ans = mid;
		}
		else {
			max_ans = mid - 1;
		}
	}
	cout << min_ans;
	return 0;
}