#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> array, int height) {
    int count = 0;
    for (int h : array) {
        if (h > height) count++; 
    }
    return count;
}

int main() {
    int n, height;
    cin >> n >> height;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << solution(array, height);
    return 0;
}
