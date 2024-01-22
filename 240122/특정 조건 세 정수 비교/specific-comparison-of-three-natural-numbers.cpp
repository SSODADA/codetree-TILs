#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    if (b < c && b < a) {
        cout << (a == b) << " ";
    }
    else if (c < b && c < a){
        cout << (a == c) << " ";
    }
    else if (a < b && a < c) {
        cout << (a == a) << " "'
    }

    cout << (a == b && a == c);
    // 여기에 코드를 작성해주세요.
    return 0;
}