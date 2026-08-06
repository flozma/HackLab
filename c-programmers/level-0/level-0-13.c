// 코딩 기초 트레이닝 - 더 크게 합치기

/**
 * 입출력 예시
 * a	b	  result
 * 9	91	  991
 * 89	8	  898
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_multiplier(int num);

int solution(int a, int b) {
    int answer = 0;
    
    int ab = a * get_multiplier(b) + b;
    int ba = b * get_multiplier(a) + a;
    

    return ab >= ba ? ab : ba;
}


int get_multiplier(int num) 
{
    int multiplier = 10;
    
    while(num >= 10)
    {
        num /= 10;
        multiplier *= 10;
    }
    
    return multiplier;
}