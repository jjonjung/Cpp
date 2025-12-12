#include <iostream>
#include <vector>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    if (!(std::cin >> N))
        return 0; 

    std::vector<int> stack;
    stack.reserve(N);

    std::string output;
    output.reserve(N * 3);

    for (int i = 0; i < N; ++i) {
        int c;
        std::cin >> c;

        if (c == 1) {
            int x;
            std::cin >> x;
            stack.push_back(x);
        } else if (c == 2) {
            if (stack.empty()) {
                output += "-1\n";
            } else {
                output += std::to_string(stack.back());
                output += '\n';
                stack.pop_back();
            }
        } else if (c == 3) {
            output += std::to_string(static_cast<int>(stack.size()));
            output += '\n';
        } else if (c == 4) {
            output += (stack.empty() ? "1\n" : "0\n");
        } else if (c == 5) {
            if (stack.empty()) {
                output += "-1\n";
            } else {
                output += std::to_string(stack.back());
                output += '\n';
            }
        }
    }
    std::cout << output;
    return 0;
}
