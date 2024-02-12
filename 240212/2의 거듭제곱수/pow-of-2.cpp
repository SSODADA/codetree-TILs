#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    int x = 0;
    while (n>1) {
        n=n/2;
        x++;
    }

    cout << x;

    return 0;
}