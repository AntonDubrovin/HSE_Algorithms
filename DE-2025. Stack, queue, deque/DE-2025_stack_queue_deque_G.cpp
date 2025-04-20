#include <iostream>
#include <string>
#include <stack>

using namespace std;


int G() {
    string s;
    getline(cin, s);

    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                cout << "NO";
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "YES";
        return 0;
    }
    else {
        cout << "NO";
        return 0;
    }

    return 0;
}
