#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    vector<int> num;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        //if (find(num.begin(), num.end(),b) == num.end()) {
        num.push_back(b);
        //}
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << '\n';
    }
    return 0;
}