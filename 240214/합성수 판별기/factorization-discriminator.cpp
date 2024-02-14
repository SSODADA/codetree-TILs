#include <iostream>
using namespace std;
bool isComposite(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    if (isComposite(n)) {
        cout << "C" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}