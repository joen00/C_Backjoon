#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;



int main() {

    int a;
    cin >> a;

    stack<int> num;

    for (int i = 0; i < a; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            num.push(n);
        }
        else if (s == "top") {
            if (num.size() == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << num.top() << "\n";
            }
        }
        else if (s == "size") {
            cout << num.size() << "\n";
        }
        else if (s == "empty") {
            if (num.size() == 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (s == "pop") {
            if (num.size() == 0) {
                cout << -1 << "\n";
            }
            else if (num.size() > 0) {
                cout << num.top() << "\n";
                num.pop();
            }
        }

    }

    return 0;
}