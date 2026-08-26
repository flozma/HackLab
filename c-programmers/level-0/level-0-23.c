// 코딩 기초 트레이닝 - 원소들의 합과 곱

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int multiply_result = 1;
    int sum = 0;
    
    for(int i = 0; i < num_list_len; i++)
    {
        multiply_result *= num_list[i];
        sum += num_list[i];
    }
    
    
    return multiply_result < pow(sum, 2) ? 1 : 0;
}