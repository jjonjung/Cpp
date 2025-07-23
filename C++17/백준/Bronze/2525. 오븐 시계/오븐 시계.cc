#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int total = A * 60 + B + C;
    A = (total / 60) % 24;
    B = total % 60;

    cout << A << " " << B << endl;
    return 0;
}
