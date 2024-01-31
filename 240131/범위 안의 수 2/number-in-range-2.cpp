#include <iostream>
using  namespace std;

int main() {
    int sum, cnt;
    double avg;
    sum = 0;
    cnt = 0;
    
    for(int i=1; i<=10; i++) {
        int n;
        cin >> n;
        if (n>=0 && n<=200) {
        sum += n;
        cnt++;
        }
    }
    avg = (double)sum /cnt ;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}