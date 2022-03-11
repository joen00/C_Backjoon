#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(string s1, string s2) {

    if (s1.length() == s2.length()) {
        return s1 < s2;
    }
    return s1.length() < s2.length();


}

int main() {

    int a;
    cin >> a;
    vector<string> str;

    for (int i = 0; i < a; i++) {
        string arr;
        cin >> arr;
        if (find(str.begin(), str.end(), arr) == str.end())str.push_back(arr);
    }

    sort(str.begin(), str.end(), compare);

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << '\n';
    }

    return 0;
}