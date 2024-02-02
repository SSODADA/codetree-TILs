#include <iostream>
using namespace std;
int main() {
    int n,a, b;
    b=0;
    while(true) {
        cin >> n;
        if(n%2==0) {
            a=n/2;
            cout << a << endl;
            b++;
            if(b==3) {
                break;
            }
        }
    }
    return 0;
}