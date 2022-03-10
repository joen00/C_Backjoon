#include <iostream>
#include <cmath>
using namespace std;


int main() {

	int a, b;

	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int r = sqrt(i);
		if (r == 1 && i != 1) {
			cout << i << endl;
			continue;
		}
		if (i % 2) {
			for (int j = 2; j <= r; j++) {
				if (!(i % j))
					break;
				if (j == r) {
					cout << i << '\n';
				}
			}
		}
	}

	return 0;
}