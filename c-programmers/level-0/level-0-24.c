// 코딩 기초 트레이닝 - 이어 붙인 수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    
    int odd = 0;
    int even = 0;
    
    int odd_output = 0;
    int even_output = 0;
    
    for(int i = 0; i < num_list_len; i++)
    {
        if(num_list[i] % 2 == 0)
        {
            even += 1;
        }
        else 
        {
            odd += 1;        
        }
    }
    
    
    for(int i = 0; i < num_list_len; i++)
    {
        if(num_list[i] % 2 == 0)
        {
            answer += num_list[i] * pow(10, even - 1);
            even -= 1;
            
        } 
        else
        {
            answer += num_list[i] * pow(10, odd - 1);
            odd -= 1;
        }
    }
    
    
    
    return answer;
}

int solution2(int num_list[], size_t num_list_len)
{
  int odd = 0;
  int even = 0;
  
  for(int i = 0; i < num_list_len; i++)
  {
    if(num_list[i] % 2 != 0)
    {
      odd = odd * 10 + num_list[i];
    }
    else
    {
      even = even * 10 + num_list[i];
    }
  }
}