#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end()); 
    int n = numbers.size();
    return numbers[n-1] * numbers[n-2];  
}

int main() {
    int length;
    cin >> length;

    vector<int> numbers(length);
    for(int i = 0; i < length; i++)
        cin >> numbers[i];

    cout << solution(numbers);
    return 0;
}
