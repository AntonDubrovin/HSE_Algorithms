#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

int H() {
    string input;
    getline(cin, input);

    stack<long long> st;
    stringstream ss(input);
    string token;

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            long long b = st.top(); st.pop();
            long long a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
        }
        else {
            st.push(stoll(token));
        }
    }

    cout << st.top() << endl;

    return 0;
}
