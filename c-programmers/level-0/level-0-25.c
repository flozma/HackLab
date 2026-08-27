// 코딩 기초 트레이닝 - 마지막 두 원소

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int num_list[], size_t num_list_len) {    
    if (num_list == NULL || num_list_len < 2)
    {
        return NULL;
    }
    
    int *answer = (int*)malloc(sizeof(int) * (num_list_len + 1));
    
    for(size_t i = 0; i < num_list_len; i++)
    {
        answer[i] = num_list[i];
    }
    
    
    int last_elem = answer[num_list_len - 1];
    int before_last_elem = answer[num_list_len - 2];
    
    if(last_elem > before_last_elem)
    {
        answer[num_list_len] = last_elem - before_last_elem;
    }
    else
    {
        answer[num_list_len] = last_elem * 2;
    }
    
    
    return answer;
}