#include <iostream>
using namespace std;
int main() {
    int b;
    b = 0;
    for(int i =1; i<=5; i++) {
        int n;
        cin >> n;
        int a= n;
        if(a%2==0) {
            b++;
        }
    }
    cout << b;
    return 0;
}