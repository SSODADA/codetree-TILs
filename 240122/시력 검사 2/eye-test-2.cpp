#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a;
    cin.get();
    cin >> b;
    cout << fixed;
    cout.precision(1);
    c = (a+b)/2;
    if (c >= 1.0) {
        cout << "High";
    }
    else if (c >= 0.5) {
        cout << "Middle";
    }
    else {
        cout << "Low";
    }

    
    // 여기에 코드를 작성해주세요.
    return 0;
}