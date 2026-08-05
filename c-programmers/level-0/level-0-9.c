// 코딩 기초 트레이닝 - 문자열 겹쳐쓰기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// #include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    int overwrite_str_len = strlen(overwrite_string);
    int my_str_len = strlen(my_string);
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(my_str_len * sizeof(char) + 1);
    strcpy(answer, my_string);

    // 다른 방법
    // memcpy(&answer[s], overwrite_string, overwrite_str_len);

    
    for(int i = 0; i < overwrite_str_len; i++)
    {
        answer[i + s] = overwrite_string[i];
    }
    
    
    return answer;
}