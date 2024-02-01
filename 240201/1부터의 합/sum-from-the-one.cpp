#include <iostream>
using namespace std;
int main() {
    int n, a;
    a=0;
    cin >> n;

    for(int i=0; i<=100; i++) {
        a+=i;
        if(a>=n) {
            cout  << i;
            break;
        }
    }
    return 0;
}