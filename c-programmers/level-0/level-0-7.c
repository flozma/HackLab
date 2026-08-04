// 코딩 기초 트레이닝 - 문자열 돌리기

// (입력) abcde
// (출력) 
// a
// b
// c
// d
// e


#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    for(int i = 0; i < strlen(s1); i++){
        printf("%c\n", s1[i]);
    }

    return 0;
}
