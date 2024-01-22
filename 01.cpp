#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string s) {
    stack<char> stk;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (stk.empty()) {
                return false;
            }

            char top = stk.top();
            stk.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return stk.empty();
}

int main() {
    while (true) {
        string s;
        cout << "Enter a string of parentheses (or 'q' to quit): ";
        cin >> s;

        if (s == "q") {
            break;
        }

        if (isBalanced(s)) {
            cout << "True" << endl;
        }
        else {
            cout << "Fasle" << endl;
        }
    }

    return 0;
}