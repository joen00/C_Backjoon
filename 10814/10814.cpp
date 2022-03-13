#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {

    pair<int, string> p;
    vector< pair<int, string>> v;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < a; i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}