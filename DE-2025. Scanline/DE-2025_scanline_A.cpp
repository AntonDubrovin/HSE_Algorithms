#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A() {
	int n;
	cin >> n;
	vector<pair<int, int>> lr(n);
	for (int i = 0; i < n; ++i) {
		cin >> lr[i].first >> lr[i].second;
	}

	sort(lr.begin(), lr.end());

	vector<pair<int, int>> ans;
	int cur_left = lr[0].first;
	int cur_right = lr[0].second;

	for (int i = 1; i < n; ++i) {
		int next_left = lr[i].first;
		int next_right = lr[i].second;

		if (next_left >= cur_left && next_left <= cur_right) {
			cur_right = max(next_right, cur_right);
		}
		else {
			ans.push_back(make_pair(cur_left, cur_right));
			cur_left = next_left;
			cur_right = next_right;
		}
	}

	ans.push_back(make_pair(cur_left, cur_right));

	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return  0;
}
