#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int B() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> diff;
    for (long long i = 1; i < n; ++i) {
        diff.push_back(a[i] - a[i - 1]);
    }

    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());
    long long result = a[n - 1] - a[0] - accumulate(diff.begin(), diff.begin() + k - 1, 0LL);
    cout << result;
    return 0;
}