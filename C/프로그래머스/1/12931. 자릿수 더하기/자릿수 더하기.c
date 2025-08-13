#include <stdio.h>    
#include <stdbool.h>  
#include <stdlib.h>   // 표준 라이브러리 

int solution(int N) {
    int sum = 0;            

    while (N > 0) {
        sum += N % 10;      
        N /= 10;            
    }

    return sum;             
}

int main() {
    int N;                 

    scanf("%d", &N);
    printf("%d\n", solution(N));

    return 0;              
}
