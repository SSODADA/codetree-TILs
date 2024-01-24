#include <iostream>
using namespace std;
int main() {
    char a_1, b_1, c_1;
    int a_2, b_2, c_2;
    cin >> a_1;
    cin.get();
    cin >> a_2;
    cin.get();
    cin >> b_1;
    cin.get();
    cin >> b_2;
    cin.get();
    cin >> c_1;
    cin.get();
    cin >> c_2;
   
    int n;
    n = 0;
    
    if (a_1 = 'Y' && a_2 >= 37) {
        n += 1;
    }
    if (b_1 = 'Y' && b_2 >= 37) {
        n += 1;
    }
    if (c_1 = 'Y' && c_2 >= 37) {
        n += 1;
    }
   
    if (n >= 2) {
        cout << "E";
    }
    else cout << "N";

    return 0;
}