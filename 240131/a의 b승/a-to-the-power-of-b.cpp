#include <iostream>
using namespace std;
int main() {
    int a, b, squ;
    cin >> a >> b;
    squ = 1;

    for(int i=1; i<=b; i++) {
        squ*=a;
    }

    cout << squ;


    return 0;
}