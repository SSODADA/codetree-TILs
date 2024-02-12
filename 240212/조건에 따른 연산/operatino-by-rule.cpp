#include <iostream>
using namespace std;

int main() {
    
    int n, cnt;
    cin >> n;
    cnt = 0;
    while(n<1000) {
        if(n%2==0) {
            n=n*3+1;
        }
        else if(n%2!=2) {
         n=n*2+2;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}