// 코딩 기초 트레이닝 - 조건 문자열

/**
 * 입출력 예시
 * 
 * ineq	eq	n	m	result
 * "<"	"="	20	50	1
 * ">"	"!"	41	78	0
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;
    
    // strcmp(a,b) == 0
    // 0 -> 같다
    // < 0 -> 사전순으로 a가 b보다 앞
    // > 0 -> 사전순으로 b가 a보다 앞
    char str_group[3] = { ineq[0], eq[0] };
    char over_and_same[3] = ">=";
    char lower_and_same[3] = "<=";
    char over[3] = ">!";
    char lower[3] = "<!";

    printf("%s\n", strcmp(str_group, over_and_same) == 0  ? "true" : "false");

    if(strcmp(str_group, over_and_same) == 0)
    {
        return n >= m ? 1 : 0;
    }
    else if (strcmp(str_group, over) == 0)
    {
        return n > m ? 1 : 0;
    }
    else if (strcmp(str_group, lower_and_same) == 0)
    {
        return n <= m ? 1 : 0;
    }
    else if (strcmp(str_group, lower) == 0)
    {
        return n < m ? 1 : 0;
    }
    

}