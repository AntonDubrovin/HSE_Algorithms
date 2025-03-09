#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int B() {
    int n;
    int d;
    cin >> n >> d;

    vector<pair<int, long long>> friends(n);
    for (int i = 0; i < n; ++i) {
        cin >> friends[i].first >> friends[i].second;
    }

    sort(friends.begin(), friends.end());

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + friends[i].second;
    }

    vector<int> m(n);
    for (int i = 0; i < n; ++i) {
        m[i] = friends[i].first;
    }

    long long max_sum = 0;
    for (int i = 0; i < n; ++i) {
        int target = m[i] + d;
        int j = upper_bound(m.begin(), m.end(), target - 1) - m.begin();
        max_sum = max(max_sum, prefix[j] - prefix[i]);
    }

    cout << max_sum;

    return 0;
}
