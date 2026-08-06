// 코딩 기초 트레이닝 - 홀짝에 따라 다른 값 반환하기

/**
 * 입출력 예시
 * 
 * n	result
 * 7	16
 * 10	220
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    bool isEven = n % 2 == 0;
    
    for (int i = isEven ? 2 : 1; i <= n; i += 2) {
        answer += isEven ? i * i : i;
    }
    
    return answer;
}