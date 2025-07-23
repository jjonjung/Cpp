#include <iostream>              // 표준 입출력 기능 사용
using namespace std;             // std:: 생략 가능하게 함

int main() {                     // 프로그램 시작점
    int x, y;                    // 두 개의 정수형 변수 선언

    cin >> x >> y;              // 사용자로부터 x, y 좌표 입력

    // 조건문: x, y의 부호를 기준으로 사분면 판별
    if (x > 0 && y > 0)          // x > 0, y > 0 → 제1사분면
        cout << 1 << endl;
    else if (x < 0 && y > 0)     // x < 0, y > 0 → 제2사분면
        cout << 2 << endl;
    else if (x < 0 && y < 0)     // x < 0, y < 0 → 제3사분면
        cout << 3 << endl;
    else                         // 나머지: x > 0, y < 0 → 제4사분면
        cout << 4 << endl;

    return 0;             
}
