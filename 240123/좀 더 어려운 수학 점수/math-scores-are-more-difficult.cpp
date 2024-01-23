#include <iostream>
using namespace std;
int main() {
    int a_eng, a_math, b_eng, b_math;
    cin >> a_math >> a_eng >> b_math >> b_eng;
    if (a_math > b_math) {
        cout << "A";
    }
    else if (a_math < b_math) {
        cout << "B";
    }
    else if (a_math == b_math && a_eng > b_eng) {
        cout << "A";
    }
    else if (a_math == b_math && a_eng < b_eng) {
        cout << "B";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}