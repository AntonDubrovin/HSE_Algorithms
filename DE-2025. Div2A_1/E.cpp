#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	} 

	int el_to_comp = arr[k - 1];
	int res = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] >= el_to_comp && arr[i] > 0) {
			++res;
		}
	}
	cout << res;
	return 0;
}