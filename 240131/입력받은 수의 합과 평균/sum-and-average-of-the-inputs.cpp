#include <iostream>
using namespace std;
int main() {
    int n ,sum;
    double avg;
    cin >> n;
    sum = 0;

    for(int i=1; i<=n; i++) {
        int a;
        cin >> a;
        sum += a;
    }

    cout << fixed;
    cout.precision(1);
    
    avg = (double)sum / n;

    cout << sum << " " << avg;

    return 0;
}