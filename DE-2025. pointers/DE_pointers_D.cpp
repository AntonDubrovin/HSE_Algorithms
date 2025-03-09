#include <iostream>
#include <string>
#include <vector>

using namespace std;

int D() {
    string s;
    cin >> s;
    int n = s.size();
    if (n < 26) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i <= n - 26; ++i) {
        vector<int> cnt(26, 0);
        int q = 0;
        int uniq = 0;

        for (int j = i; j < i + 26; ++j) {
            if (s[j] == '?') {
                q++;
            } else {
                int idx = s[j] - 'A';
                if (++cnt[idx] > 1) {
                    break;
                }
                uniq++;
            }
        }

        if (q + uniq >= 26) {
            vector<char> missing;
            for (int k = 0; k < 26; ++k)
                if (!cnt[k]) {
                    missing.push_back('A' + k);
                }

            string res = s;
            int p = 0;
            for (int j = i; j < i + 26; ++j) {
                if (res[j] == '?') {
                    res[j] = p < missing.size() ? missing[p++] : 'A';
                }
            }
            for (auto& c : res) {
                if (c == '?') {
                    c = 'A';
                }
            }
            cout << res;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
