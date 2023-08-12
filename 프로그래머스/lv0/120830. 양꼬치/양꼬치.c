#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int real_k=0;
    real_k=n/10;
    answer= 12000*n+2000*(k-real_k);
    return answer;
}