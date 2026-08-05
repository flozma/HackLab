// 코딩 기초 트레이닝 - 문자 리스트를 문자열로 변환하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *answer = (char *)malloc((arr_len + 1) * sizeof(char)); // 문자 배열 | 문자(char) 배열의 시작 주소를 가리키는 포인터
    // char **arr = malloc(5 * sizeof(char *)); // 문자 포인터들의 배열
    
    // const char *arr[] : 문자열을 가리키는 포인터들의 배열 | (const char *)들의 배열 
    for(int i = 0; i < arr_len; i++)
    {
        answer[i] = arr[i][0]; // i번째 문자열의 첫 번째 문자(길이가 1인 문자열이므로 유일한 문자)를 저장
        // answer[i] = *arr[i];
    }
    
    answer[arr_len] = '\0';
    
    
    return answer;
}