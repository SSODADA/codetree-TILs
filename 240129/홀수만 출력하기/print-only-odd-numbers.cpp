#include <iostream>
using namespace std;
int main() {
    int n;
    int temp;
    cin >> n;
    
    for(int i = 1; i<=6; i++) {
        temp = n;
        cin >> n;
        
        if (temp!=2 && temp%3==0) {
            cout << temp << endl;
        }
       
    }
    return 0;
}