// // 코딩 기초 트레이닝 - 문자열 붙여서 출력하기

// (입력) hello world!
// (출력) helloworld!

#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    
    scanf("%s %s", s1, s2);

    printf("%s%s",s1,s2);
    return 0;
}