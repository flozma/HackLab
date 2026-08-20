// 코딩 기초 트레이닝 - 등차수열의 특정한 항만 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// included_len은 배열 included의 길이입니다.
int solution(int a, int d, bool included[], size_t included_len) {
    int answer = 0;
    int current_value = a;
    
    
    for(int i = 0; i < included_len; i++)
    {   
        if(included[i])
        {
            answer += current_value;
        }
        
        current_value += d;
    }
    
    return answer;
}