#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> dot) {
    int x = dot[0];
    int y = dot[1];

    if (x > 0 && y > 0) return 1;   
    if (x < 0 && y > 0) return 2;   
    if (x < 0 && y < 0) return 3;   
    return 4;                       
}

int main() {
    vector<int> dot(2);
    cin >> dot[0] >> dot[1];

    cout << solution(dot);
    return 0;
}
