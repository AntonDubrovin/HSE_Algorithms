#include <iostream>
#include <string>
#include <regex>

using namespace std;

int J() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    regex pattern("(?=(xxx))");
    auto ans = distance(
        sregex_iterator(s.begin(), s.end(), pattern),
        sregex_iterator()
    );
    cout << ans;
    return 0;
}