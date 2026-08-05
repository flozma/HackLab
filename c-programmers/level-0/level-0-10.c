// 코딩 기초 트레이닝 - 문자열 섞기

// (입력) aaaaa , bbbbb
// (출력) ababababab
// 제한사항
// 1 ≤ str1의 길이 = str2의 길이 ≤ 10 | str1과 str2는 알파벳 소문자로 이루어진 문자열입니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    int sum_len = str1_len + str2_len;

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((sum_len + 1) * sizeof(char)); // NULL ZERO 사이즈까지 포함
    
    for(int i = 0; i < str2_len; i++)
    {
        
        answer[i * 2] = str1[i];
        answer[i * 2 + 1] = str2[i];
        
        // i = 0
        // 0 1
        // i = 1
        // 2 3
        // i = 2
        // 4 5
        // i = 3
        // 6 7
        // i = 4
        // 8 9
    }
    
    answer[sum_len] = '\0';
    
    return answer;
}