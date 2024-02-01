#include <iostream>
using namespace std;
int main() {
    int a;
    int n, m;
    cin >> a;
    for(int i=1; i<=a; i++) {
        n=i%7;
        m=i/8;
        if(i%2==0&&i%4!=0 || m%2==0 || n<4) {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}