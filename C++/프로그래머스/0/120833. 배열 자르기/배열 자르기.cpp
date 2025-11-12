#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for (int i = num1; i <= num2; i++) {
        answer.push_back(numbers[i]);
    }
    return answer;
}

int main() {
    int n, num1, num2;
    cin >> n >> num1 >> num2;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    vector<int> result = solution(numbers, num1, num2);

    for (int x : result)
        cout << x << " ";
    return 0;
}
