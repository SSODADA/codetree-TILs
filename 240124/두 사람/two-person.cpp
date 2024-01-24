#include <iostream>
using namespace std;
int main() {
    int a_age, b_age;
    char a_gender, b_gender;
    cin >> a_age >> a_gender >> b_age >> b_gender;
    
    if((a_age >= 19 && a_gender == 'M') || (b_age >= 19 && b_gender == 'M')) {
        cout << 1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}