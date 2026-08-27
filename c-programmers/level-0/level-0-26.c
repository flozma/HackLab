// 코딩 기초 트레이닝 - 수 조작하기 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    W = 'w',
    S = 's',
    D = 'd',
    A = 'a',
} WSDA;

int solution(int n, const char* control) {
    int answer = n;
    
    for(int i = 0; control[i] != '\0'; i++)
    {
        switch(control[i])
        {
            case W:
                answer += 1;
                break;
            case S:
                answer -= 1;
                break;
            case D:
                answer += 10;
                break;
            case A:
                answer -= 10;
                break;
        }
    }
    
    return answer;
}