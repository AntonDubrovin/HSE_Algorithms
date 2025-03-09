#include <iostream>

using namespace std;

int J() {
    int t;
    cin >> t;

    long long l, r;
    for (int i = 0; i < t; ++i) {
        cin >> l >> r;
        long long first_ans = l;
        if (l * 2 > r) {
            cout << -1 << " " << -1 << endl;
        }
        else {
            cout << first_ans << " " << first_ans * (r / first_ans) << endl;
        }
    }
    return 0;
}