#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    
    if (sides[2] < sides[0] + sides[1])
        return 1;
    else
        return 2;
}

int main() {
    vector<int> sides(3);
    cin >> sides[0] >> sides[1] >> sides[2];

    cout << solution(sides);
    return 0;
}
