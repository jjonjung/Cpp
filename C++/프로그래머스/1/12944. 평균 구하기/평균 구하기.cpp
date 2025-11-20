#include <vector>
using namespace std;

double solution(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return (double)sum / arr.size();
}
