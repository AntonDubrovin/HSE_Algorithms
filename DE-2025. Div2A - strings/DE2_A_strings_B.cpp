#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int B() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        sort(s.begin(), s.end());

        if (s[0] == s.back()) {
            cout << -1 << endl;
        }
        else {
            bool isPalindrome = true;
            int n = s.size();
            for (int i = 0; i < n / 2; ++i) {
                if (s[i] != s[n - 1 - i]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (!isPalindrome) {
                cout << s << endl;
            }
            else {
                swap(s[0], s[1]);
                cout << s << endl;
            }
        }
    }
    return 0;
}