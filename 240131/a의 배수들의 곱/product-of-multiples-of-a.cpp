#include <iostream>
using namespace std;

int main() {
    
    int a, b, mul;
    cin >> a >> b;
    mul=1;

    for(int i=1; i<=b; i++) {
        if(i%a==0) {
            mul*=i;
        }
    }
    cout << mul;
    return 0;
}