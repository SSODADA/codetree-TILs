#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n>=3 && n<=5) {
        cout << "Spring";
    }
    if (n>=6 && n<=8) {
        cout << "Summer";
    }
    if (n>=9 && n<=11) {
        cout << "Fall";
    }
    if (n>=12 || n<=2) {
        cout << "Winter";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}