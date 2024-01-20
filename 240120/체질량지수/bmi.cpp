#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int bmi = b*100*100/(a*a);

    cout << bmi << endl;
    
    if (bmi >= 25) {
        cout  << "Obesity";         
    }

    return 0;
}