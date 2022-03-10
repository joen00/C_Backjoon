#include <iostream>
#include <string>
using namespace std;

int bak[200];

int main() {

	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			bak[str[i]]++;
		}
		else {
			bak[str[i]]++;
		}
	}
	int min = 0;
	int check = 0;
	int flag = 0;
	for (int i = 65; i <= 90; i++) {
		if (bak[i] > min)
		{
			min = bak[i];
			check = i;
		}
	}
	for (int i = 65; i <= 90; i++) {
		if (min == bak[i] && check != i)
		{
			flag = 1;
		}
	}
	if (flag == 1) {
		cout << "?";
	}
	else {
		cout << char(check);
	}

	return 0;
}