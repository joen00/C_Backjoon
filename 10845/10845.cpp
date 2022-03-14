#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {

    int a;
    cin >> a;

    queue<int> num;

    for (int i = 0; i < a; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            num.push(n);
        }
        else if (s == "front") {
            if (num.size() == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << num.front() << "\n";
            }
        }
        else if (s == "back") {
            if (num.size() == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << num.back() << "\n";
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
                cout << num.front() << "\n";
                num.pop();
            }
        }
    }

    return 0;
}