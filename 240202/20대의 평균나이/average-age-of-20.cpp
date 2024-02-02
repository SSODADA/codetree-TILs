#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int age;
    int sum = 0;
    int count = 0;

    // 입력 받기
    while (cin >> age) {
        // 20대가 아니라면 반복문 종료
        if (age < 20 || age >= 30) {
            break;
        }

        // 나이들의 총합과 개수 계산
        sum += age;
        count++;
    }

    // 평균 계산 및 출력
    double average = static_cast<double>(sum) / count;
    cout << fixed << setprecision(2) << average << endl;

    return 0;
}