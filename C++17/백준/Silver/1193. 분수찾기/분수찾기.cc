#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long X;
    if (!(cin >> X)) return 0;

    long double disc = sqrt((long double)1 + 8.0L * (long double)X);
    long long n = (long long)ceil(( -1.0L + disc ) / 2.0L);

    long long prev_sum = n * (n - 1) / 2;
    long long offset = X - prev_sum; 

    long long numerator, denominator;
    if (n % 2 == 0) {
        numerator = offset;
        denominator = n - offset + 1;
    } else {
        numerator = n - offset + 1;
        denominator = offset;
    }

    cout << numerator << '/' << denominator << '\n';
    return 0;
}
