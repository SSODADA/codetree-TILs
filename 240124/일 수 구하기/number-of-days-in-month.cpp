#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <=7 && n%2 != 0) {
        cout << "31";
        }
    if (n <=7 && n%2 == 0) {
            if (n == 2) {
                cout << "28";
            }
            cout << "30";
    }
    if (n >=8 && n%2 == 0) {
        cout << "31";
    }
    if (n >=8 && n%2 != 0) {
        cout << "30";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}