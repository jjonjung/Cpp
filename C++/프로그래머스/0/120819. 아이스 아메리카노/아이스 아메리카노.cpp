#include <vector>

std::vector<int> solution(int money) {
  
    const int price = 5500;
    
    int max_cups = money / price;
    int remaining_money = money % price;
    
    return {max_cups, remaining_money};
}