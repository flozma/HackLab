// 코딩 기초 트레이닝 - 덧셈식 출력하기
// (입력) 4 5
// (출력) 4 + 5 = 9

#include <stdio.h>

int main(void) {
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
    return 0;
}