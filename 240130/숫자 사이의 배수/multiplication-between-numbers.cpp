#include <iostream>
using namespace std;
int main() {
    int a, b, sum, n;
    double avg;
    sum = 0;
    n=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++) {
        
        if(i%5==0 || i%7==0) {
            sum += i;
            n++;
        }
    }
    avg = (double)sum/n;
    cout<<fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}