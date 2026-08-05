// 코딩 기초 트레이닝 - 문자열 곱하기

/**
 * 입,출력
 * 
 * my_string	k	result
 * "string"	3	"stringstringstring"
 * "love"	10	"lovelovelovelovelovelovelovelovelovelove"
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    int my_string_len = strlen(my_string);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char *answer = (char *)malloc((my_string_len * k + 1) * sizeof(char));
    
//     for(int i = 0; i < k; i++) 
//     {
//         for(int j = 0; j < my_string_len; j++)
//         {
//             answer[i * my_string_len + j] = my_string[j];
//             printf("%d %d %c\n", i, j, answer[i * j + j]);
//         }
//     }
    
    answer[my_string_len * k] = '\0';
    
    for (int i = 0; i < k; i++) 
    {
        strcpy(&answer[i * my_string_len], my_string);
        // strcyp(answer + i * my_string_len, my_string);
    }
    
    
    
    return answer;
}