// 코딩 기초 트레이닝 - n의 배수

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = num % n == 0 ? 1 : 0;
    return answer;
}