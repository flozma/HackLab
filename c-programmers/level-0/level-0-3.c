// 코딩 기초 트레이닝 - 문자열 반복해서 출력하기

#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    
    scanf("%s %d", s1, &a);
    
    for (int i = 0; i < a; i++){
        printf("%s", s1);
    }
    
    return 0;
}