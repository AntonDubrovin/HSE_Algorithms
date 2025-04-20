#include <iostream>
#include <queue>

using namespace std;

bool first_wins(int a, int b) {
    if (a == 0 && b == 9) return true;
    if (a == 9 && b == 0) return false;
    return a > b;
}

int F() {
    queue<int> first, second;
    for (int i = 0; i < 5; i++) {
        int card; cin >> card;
        first.push(card);
    }
    for (int i = 0; i < 5; i++) {
        int card; cin >> card;
        second.push(card);
    }

    int moves = 0;
    const int MAX_MOVES = 1000000;

    while (!first.empty() && !second.empty() && moves < MAX_MOVES) {
        int f = first.front(); first.pop();
        int s = second.front(); second.pop();

        if (first_wins(f, s)) {
            first.push(f);
            first.push(s);
        }
        else {
            second.push(f);
            second.push(s);
        }
        moves++;
    }

    if (moves == MAX_MOVES) {
        cout << "botva\n";
    }
    else if (first.empty()) {
        cout << "second " << moves << endl;
    }
    else {
        cout << "first " << moves << endl;
    }

    return 0;
}
