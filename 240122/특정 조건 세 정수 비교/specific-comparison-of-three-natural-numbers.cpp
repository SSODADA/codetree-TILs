#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b || a == c) << " ";
    cout << (a == b && a == c && b == c);
    // 여기에 코드를 작성해주세요.
    return 0;
}