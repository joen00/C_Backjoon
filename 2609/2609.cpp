#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {

    int temp, n;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main() {

    int a, b;
    cin >> a >> b;
    int gcdnum = gcd(a, b);
    cout << gcdnum << "\n";
    cout << (a / gcdnum) * (b / gcdnum) * gcdnum << '\n';

    return 0;
}