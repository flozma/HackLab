// 코딩 기초 트레이닝 - 대소문자 바꿔서 출력하기

// (입력) aBcDeFg
// (출력) AbCdEfG

#include <stdio.h>
#include <ctype.h>

#define LEN_INPUT 20

int main(void)
{
    char s1[LEN_INPUT];
    scanf("%19s", s1);

    // s1[i] != '\0' or strlen(s1)
    for (int i = 0; s1[i] != '\0'; i++) {
        if (islower(s1[i]))
            s1[i] = toupper(s1[i]);
        else if (isupper(s1[i]))
            s1[i] = tolower(s1[i]);
    }

    printf("%s", s1);

    return 0;
}
