#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct name {
    int x;
    int y;
};

int main() {

    name N[50];
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> N[i].x >> N[i].y;
    }
    int flag = 1;

    for (int i = 0; i < a; i++) {
        flag = 1;
        for (int j = 0; j < a; j++) {
            if (N[i].x < N[j].x && N[i].y < N[j].y) {
                flag++;
            }
        }
        cout << flag << endl;
    }

    return 0;
}