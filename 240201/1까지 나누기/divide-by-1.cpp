#include <iostream>
using namespace std;
int main() {
    int n, a;
    a=0;
    cin >> n;
    for(int i=1; i++;) {
        a++;
        n=n/i;
        if(n<=1) {
            a++;
            cout << a;
            break;
        }
    }

    return 0;
}