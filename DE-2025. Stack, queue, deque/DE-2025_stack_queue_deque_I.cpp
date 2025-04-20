#include <iostream>
#include <deque>

using namespace std;

int I() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> left, right;
    int id;
    char type;

    for (int i = 0; i < n; ++i) {
        cin >> type;

        if (type == '+') {
            cin >> id;
            right.push_back(id);
        }
        else if (type == '*') {
            cin >> id;
            right.push_front(id);
        }
        else {
            cout << left.front() << endl;
            left.pop_front();
        }

        while (left.size() < right.size()) {
            left.push_back(right.front());
            right.pop_front();
        }
        while (left.size() > right.size() + 1) {
            right.push_front(left.back());
            left.pop_back();
        }
    }

    return 0;
}
