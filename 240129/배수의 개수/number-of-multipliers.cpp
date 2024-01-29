#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 0;

    for(int i =1; i<=10; i++) {
        int n;
        cin >> n;
        if(n%3==0) {
            a++;
        }
        if(n%5==0) {
            b++;
        }
    }
    cout << a << " ";
    cout << b << " ";

    return 0;
}