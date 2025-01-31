#include <iostream>
#include <string>
#include <map>

using namespace std;

int H() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> two_symbols_counts;
    string ans;
    int max_two_wymbols = 0;

    for (int i = 0; i < n - 1; ++i) {
        string two_symbols;
        two_symbols.append(1, s[i]);
        two_symbols.append(1, s[i + 1]);
        two_symbols_counts[two_symbols]++;

        if (two_symbols_counts[two_symbols] > max_two_wymbols) {
            max_two_wymbols = two_symbols_counts[two_symbols];
            ans = two_symbols;
        }
    }

    cout << ans;
    return 0;
}