#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;
const unsigned long long MAX_X = (1ULL << 32) - 1;
unsigned long long x = 0;

int A() {
    int l;
    cin >> l;

    vector<string> commands(l);
    vector<int> values(l, 0);

    for (int i = 0; i < l; ++i) {
        cin >> commands[i];
        if (commands[i] == "for") {
            cin >> values[i];
        }
    }

    stack<pair<int, unsigned long long>> loop_stack;
    unsigned long long multiplier = 1;
    int i = 0;

    while (i < l) {
        if (commands[i] == "for") {
            unsigned long long new_multiplier = multiplier;
            if (values[i] > 0 && MAX_X / values[i] < multiplier) {
                new_multiplier = MAX_X + 1;
            }
            else {
                new_multiplier *= values[i];
            }
            loop_stack.push({ i, multiplier });
            multiplier = new_multiplier;
        }
        else if (commands[i] == "end") {
            multiplier = loop_stack.top().second;
            loop_stack.pop();
        }
        else {
            if (multiplier > MAX_X || x + multiplier > MAX_X) {
                cout << "OVERFLOW!!!" << endl;
                return 0;
            }
            x += multiplier;
        }
        ++i;
    }

    cout << x << endl;
    return 0;
}
