// 코딩 기초 트레이닝 - 두 수의 연산값 비교하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * 입출력 예
 * a	b	result
 * 2	91	364
 * 91	2	  912
 */


int get_multiplier(int num);

int solution(int a, int b) {
    int ab = a * get_multiplier(b) + b;
    int target = 2 * a * b;
    
    if(ab == target) 
    {
        return ab;
    } 
    
    return ab > target ? ab : target;
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