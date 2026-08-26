// 코딩 기초 트레이닝 - 주사위 게임 2

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    
    if (a == b && b == c && c == a)
    {
        answer = (a + b + c) * (a * a + b * b + c * c) * (a * a * a + b * b * b + c * c * c);
    }
    
    if (a != b || b != c || c != a) 
    {
        answer = (a + b + c) * (a * a + b * b + c * c);
    }
    
    if (a != b && b != c && c != a)
    {
        answer = a + b+ c;
    }
    return answer;
}