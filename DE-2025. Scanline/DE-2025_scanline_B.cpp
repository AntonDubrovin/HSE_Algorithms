#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int B() {
    int m;
    cin >> m;
    int l;
    int r;
    vector<pair<int, int>> lr;
    while (true) {
        cin >> l >> r;
        if (l == 0 && r == 0) {
            break;
        }
        lr.push_back(make_pair(l, r));
    }

    sort(lr.begin(), lr.end());

    vector<pair<int, int>> ans;
    int curr = 0;
    int i = 0;
    int n = lr.size();

    while (curr < m && i < n) {
        int bestIdx = -1;
        int maxR = curr;

        while (i < n && lr[i].first <= curr) {
            if (lr[i].second > maxR) {
                maxR = lr[i].second;
                bestIdx = i;
            }
            i++;
        }

        if (bestIdx == -1) {
            break;
        }

        ans.push_back(lr[bestIdx]);
        curr = maxR;

        if (curr >= m) {
            break;
        }
    }

    if (curr >= m) {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); ++i) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else {
        cout << "No solution";
    }

    return 0;
}