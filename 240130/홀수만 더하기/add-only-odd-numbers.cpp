#include <iostream>
using namespace std;
int main() {
    // 변수 선언
    int n, sum;
    sum = 0;

	// 입력
	cin >> n;
    
	for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if(a % 2 == 1 && a % 3 == 0)
            sum += a;
	}

    // 출력
    cout << sum;

    return 0;
}