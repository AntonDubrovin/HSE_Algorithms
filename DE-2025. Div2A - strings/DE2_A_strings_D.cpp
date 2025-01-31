#include <iostream>
#include <string>

using namespace std;

int D() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string b;
        cin >> b;

        string a;
        a += b[0];

        for (int i = 1; i < b.size(); i += 2) {
            a += b[i];
        }
        cout << a << endl;
    }
    return 0;
}