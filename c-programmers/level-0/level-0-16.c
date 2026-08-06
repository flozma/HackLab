// 코딩 기초 트레이닝 - 공배수

/**
 * 입출력 예시
 * number	n	 m	result
 * 60	    2	 3	1
 * 55	    10 5	0
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    // 풀이 1
    int result_n = number % n == 0 ? 1 : 0;
    int result_m = number % m == 0 ? 1 : 0;
    
    int answer = result_n && result_m;
    
    // 풀이 2
    // int answer = (number % n + number % m) == 0 ? 1 : 0;
    
    return answer;
}