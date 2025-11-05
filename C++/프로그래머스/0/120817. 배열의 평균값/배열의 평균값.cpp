#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    for(int num : numbers) {
        sum += num;
    }
    return (double)sum / numbers.size();
}
