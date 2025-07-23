#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= 9; i++) {  // i <= 9 로 수정
        cout << N << " * " << i << " = " << N * i << endl;
    } 

    return 0;
}
