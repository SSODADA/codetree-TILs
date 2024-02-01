#include <iostream>
using namespace std;
int main() {
    int n, a;
    a=1;
    cin >> n;
for(int i=1; i<=10; i++) {
    a*=i;
    if(a>=n) {
        cout << i;
        break;
    }
}

    return 0;
}