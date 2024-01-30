#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0;

    for(int i =1; i<=n; i++) {
        if(i%4==0) {
            a++;
        }
        if(i%100==0&&i%400!=0) {
            a--;
        }
    }
    cout << a;
    return 0;
}