#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int B() {
    string s;
    cin >> s;
    int n = s.size();

    vector<char> min_right(n);
    min_right[n - 1] = s[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        min_right[i] = min(s[i], min_right[i + 1]);
    }

    stack<char> t;
    string u;
    int left = 0;

    while (left < n || !t.empty()) {
        if (!t.empty()) {
            char t_back = t.top();
            bool has_smaller = (left < n) ? (min_right[left] < t_back) : false;
            if (!has_smaller) {
                u += t_back;
                t.pop();
                continue;
            }
        }
        if (left < n) {
            t.push(s[left]);
            left++;
        }
    }

    cout << u << endl;
    return 0;
}