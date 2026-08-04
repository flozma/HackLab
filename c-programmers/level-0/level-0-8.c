// 코딩 기초 트레이닝 - 홀짝 구분하기 

// (입력) 100
// (출력) 100 is even

// (입력) 1
// (출력) 1 is odd

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("%d is even", a);
    } else {
        printf("%d is odd", a);
    }

    return 0;
}