#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a>b && a>c) {
        cout << a;
    }
    else if (b>a && b>c) {
        cout << b;
    }
    else if (c>a && c>b) {
        cout << c;
    }
    else if (a>=b && a>c) {
        cout << a;
    }
    else if (a>b && a>=c) {
        cout << a;
    }
    else if (b>=a && b>c) {
        cout << b;
    }
    else if (b>a && b>=c) {
        cout << b;
    }
    else if (c>=a && c>b) {
        cout << c;
    }
    else if (c>a && c>=b) {
        cout << c;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}