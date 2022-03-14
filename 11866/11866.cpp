#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {

    int a, b, temp;
    cin >> a >> b;

    queue<int> q;

    for (int i = 1; i <= a; i++) {
        q.push(i);
    }
    cout << '<';
    while (q.size() > 1) {
        for (int i = 0; i < b - 1; i++) {
            temp = q.front();
            q.push(temp);
            q.pop();
        }
        temp = q.front();
        cout << temp << ", ";
        q.pop();
    }
    temp = q.front();
    cout << temp << ">\n";

    return 0;
}