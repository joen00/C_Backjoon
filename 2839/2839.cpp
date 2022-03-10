#include <iostream>

using namespace std;

int main() {

	int a;
	cin >> a;
	int cnt = -1;

	int MAX = a / 5;
	for (int i = MAX; i >= 0; i--) {
		int b = a - (i * 5);
		if (b % 3 == 0) {
			cnt = i + (b / 3);
			break;
		}
	}

	cout << cnt;

	return 0;
}