#include <iostream>
using namespace std;

int solution(int n, int t) {
    return n << t; 
}

int main() {
    int n, t;
    cin >> n >> t;
    cout << solution(n, t);
    return 0;
}
