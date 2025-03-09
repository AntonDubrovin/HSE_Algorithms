#include <iostream>
#include <vector>

using namespace std;

int A() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    bool sereja_turn = true;

    while (left <= right) {
        int chosen;
        if (cards[left] > cards[right]) {
            chosen = cards[left];
            ++left;
        }
        else {
            chosen = cards[right];
            --right;
        }

        if (sereja_turn) {
            sereja += chosen;
        }
        else {
            dima += chosen;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja << " " << dima;
    return 0;
}
