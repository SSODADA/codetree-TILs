#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cout << fixed;
    cout.precision(0);
    cout << a+b+c << endl << (double)(a+b+c)/3;
    // 여기에 코드를 작성해주세요.
    return 0;
}