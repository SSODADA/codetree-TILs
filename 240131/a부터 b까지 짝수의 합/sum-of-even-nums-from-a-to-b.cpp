#include <iostream>
using namespace std;
int main() {
    int a, b, sum;
    sum = 0;
    cin >> a >> b;

    if(a<=b) {
        for(int i=1; i<=b; i++) {
            if(i%2==0) {
                sum+=i;
            }
        }
    }
    else if(a>=b) {
        for(int i=1; i<=a; i++) {
            if(i%2==0) {
                sum+=i;
            }
        }
    }

    cout << sum;
    return 0;
}