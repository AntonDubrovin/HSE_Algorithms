#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int D() {
    int n;
    cin >> n;
    vector<pair<int, int>> events;

    int h1, m1, s1, h2, m2, s2;
    for (int i = 0; i < n; ++i) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        int open = h1 * 60 * 60 + m1 * 60 + s1;
        int close = h2 * 60 * 60 + m2 * 60 + s2;

        if (open == close) {
            events.push_back(make_pair(0, 1));
            events.push_back(make_pair(24 * 60 * 60, -1));
            continue;
        }

        if (open < close) {
            events.push_back(make_pair(open, 1));
            events.push_back(make_pair(close, -1));
        }
        else {
            events.push_back(make_pair(open, 1));
            events.push_back(make_pair(24 * 60 * 60, -1));
            events.push_back(make_pair(0, 1));
            events.push_back(make_pair(close, -1));
        }
    }

    sort(events.begin(), events.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        else {
            return a.first < b.first;
        }
        });

    int current_active = 0;
    int ans = 0;
    int start_time = -1;

    for (int i = 0; i < events.size(); ++i) {
        int time = events[i].first;
        int delta = events[i].second;

        if (current_active == n) {
            ans += time - start_time;
        }

        current_active += delta;

        if (current_active == n) {
            start_time = time;
        }
        else {
            start_time = -1;
        }
    }

    cout << ans;

    return 0;
}