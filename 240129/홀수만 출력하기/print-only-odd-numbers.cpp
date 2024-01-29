#include <iostream>
#include <vector>

int main() {
    int n;
    
    std::cin >> n;

    std::vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }


    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 1 && numbers[i] % 3 == 0) {
            std::cout << numbers[i] << std::endl;
        }
    }

    return 0;
}