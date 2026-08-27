// 코딩 기초 트레이닝 - 수 조작하기 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n, const char* control) {
    int answer = n;
    
    for(int i = 0; i < strlen(control); i++)
    {
        switch(control[i])
        {
            case 'w':
                answer += 1;
                break;
            case 's':
                answer -= 1;
                break;
            case 'd':
                answer += 10;
                break;
            case 'a':
                answer -= 10;
                break;
        }
    }
    
    return answer;
}