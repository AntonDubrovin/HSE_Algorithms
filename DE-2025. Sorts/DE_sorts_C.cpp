#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int C() {
    long long s, b;
    cin >> s >> b;

    vector<long long> a(s); 
    vector<long long> d(b);
    vector<long long> g(b);

    for (long long i = 0; i < s; ++i) {
        cin >> a[i];
    }

    for (long long i = 0; i < b; ++i) {
        cin >> d[i] >> g[i];
    }

    vector<pair<long long, long long>> bases(b);
    for (long long i = 0; i < b; ++i) {
        bases[i] = make_pair(d[i], g[i]);
    }
    sort(bases.begin(), bases.end());

    vector<long long> prefixG(b);
    if (b > 0) {
        prefixG[0] = bases[0].second;
        for (long long i = 1; i < b; ++i) {
            prefixG[i] = prefixG[i - 1] + bases[i].second;
        }
    }

    for (long long i = 0; i < s; ++i) {
        long long maxD = a[i];

        long long idx = upper_bound(bases.begin(), bases.end(), make_pair(maxD, LLONG_MAX)) - bases.begin() - 1;

        if (idx == -1) {
            cout << "0 ";
        }
        else {
            cout << prefixG[idx] << " ";
        }
    }
    return 0;
}
