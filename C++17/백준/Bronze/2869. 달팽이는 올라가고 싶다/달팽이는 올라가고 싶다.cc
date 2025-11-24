#include <iostream>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    // (V - B) / (A - B) 올림 처리
    int days = (V - B + (A - B - 1)) / (A - B);

    cout << days << "\n";
    return 0;
}
