#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s) {
    int b = 0;
    for (char c : s) {
        b += (c == '(' ? 1 : -1);
        if (b < 0) return false;
    }
    return b == 0;
}

