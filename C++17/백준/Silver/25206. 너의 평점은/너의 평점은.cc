#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 등급 → 과목평점 매핑
    map<string, double> gradeTable = {
        {"A+", 4.5}, {"A0", 4.0},
        {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0},
        {"D+", 1.5}, {"D0", 1.0},
        {"F",  0.0}
    };

    string subject, grade;
    double credit;

    double totalScore = 0.0; // (학점 × 과목평점)의 합
    double totalCredit = 0.0; // 학점의 합 (P 제외)

    for (int i = 0; i < 20; i++) {
        cin >> subject >> credit >> grade;

        if (grade == "P") continue; // P는 계산에서 제외

        totalScore += credit * gradeTable[grade];
        totalCredit += credit;
    }

    double result = totalScore / totalCredit;

    cout << fixed << setprecision(6) << result << "\n";
    return 0;
}
