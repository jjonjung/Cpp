#include <iostream>
#include <limits> 

int main() {
    int N;
    std::cin >> N;

    int min = std::numeric_limits<int>::max(); 
    int max = std::numeric_limits<int>::min();  

    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;

        if (num < min) min = num;
        if (num > max) max = num;
    }

    std::cout << min << " " << max;

    return 0;
}
