#include <iostream>
using namespace std;
int main() {
    int n, book, mask;
    cin >> n;
    book = 3000;
    mask = 1000;
    if (n >= book) {
        cout << "book";
    }
    else if (n >= 1000) {
        cout << "mask";
    }
    else {
        cout << "no";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}