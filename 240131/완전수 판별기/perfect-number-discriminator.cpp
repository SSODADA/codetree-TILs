#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cin >> n;
    //12357
    for(int i =1; i<=n; i++) {
        if(n%i==0) {
            sum += i;
        }
    }
    sum = sum - n;
    if(n==sum) {
        cout << 'P';
    } else cout << 'N';

    return 0;
}