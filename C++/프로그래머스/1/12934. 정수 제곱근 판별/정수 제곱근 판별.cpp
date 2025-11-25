#include <cmath>

long long solution(long long n) {
    long long x = sqrt(n);     

    if (x * x == n) {        
        long long next = x + 1;
        return next * next;   
    } else {
        return -1;
    }
}
