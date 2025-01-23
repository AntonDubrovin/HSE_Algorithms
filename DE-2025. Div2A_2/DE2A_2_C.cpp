#include <iostream>
#include <string>

using namespace std;

int C() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int removeCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            removeCount++;
        }
    }

    cout << removeCount << endl;
    return 0;
}