#include <iostream>
using namespace std;
int main() {
    int sum = 0;

    for (int i = 1; i<=6; i++) {
        int a;
        cin >> a;

        if(a%2!=0 && a%3==0) {
            sum += a;
        }
    }
    cout << sum;
    return 0;
}