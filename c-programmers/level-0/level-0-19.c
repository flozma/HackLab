// 코딩 기초 트레이닝 - flag에 따라 다른 값 반환하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    int answer = flag ? a + b : a - b;
      
    return answer;
}