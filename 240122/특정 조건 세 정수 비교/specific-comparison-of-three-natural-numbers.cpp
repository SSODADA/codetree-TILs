#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b > c) {
        cout << (a==c) << " ";
    }
    else if (b < c) {
        cout << (a==b) << " ";
    }

    cout << (a == b && a == c);
    // 여기에 코드를 작성해주세요.
    return 0;
}