#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    
    c = pow((0.01*a),2);

    int bmi = b/c;

    cout << bmi << endl;
    
    if (bmi >= 25) {
        cout  << "Obesity";         
    }

    return 0;
}