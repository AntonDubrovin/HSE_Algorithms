#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int M() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    stack<int> s;
    vector<int> ans(n, -1);

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && a[s.top()] <= a[i]) {
            s.pop();
        }

        if (!s.empty()) {
            ans[i] = s.top() + 1;
        }
        s.push(i);
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }

    return 0;
}
