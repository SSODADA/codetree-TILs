#include <iostream>
using namespace std;
int main() {
    int b, a;
    cin >> b >> a;
    int n = b;

    while (n >= a) {
        if(n%2==0) {
            cout << n << " ";
        }
        n--;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}