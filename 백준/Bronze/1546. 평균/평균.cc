#include <iostream>
#include <vector>
#include <algorithm> // max_element

int main() {
    int N;
    std::cin >> N;

    std::vector<double> scores(N);
    for (int i = 0; i < N; i++) {
        std::cin >> scores[i];
    }

    double M = *std::max_element(scores.begin(), scores.end());

    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += (scores[i] / M) * 100.0;
    }

    std::cout << sum / N << "\n";
    return 0;
}
