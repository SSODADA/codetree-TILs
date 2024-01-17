#include <iostream>
using namespace std;
int main() {
    string s, t, temp;
    cin >> s >> t;
    temp = s;
    s = t;
    t = temp;
    cout << s << endl << t;
    // 여기에 코드를 작성해주세요.
    return 0;
}