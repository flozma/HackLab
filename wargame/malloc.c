#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
int *p;

p = (int *)malloc(40);
// p = (int *)malloc(10 * sizeof(*p));
  
// 예외처리
if(p == NULL) {
	/* 동적 메모리 할당이 실패
	- 적절한 조치를 취한다.
	*/
	return 1;
}


p[0] = 12;
p[1] = 24;
*(p+2) = 36;

    
// 동적할당 제거
free(p);
p = NULL;



int *array = (int *)malloc(4 * sizeof(int)); // 16byte = 4 * 4byte (== int) | 16이라고 정수를 쓰는 것은 좋지않다.
array[0] = 1;
*(array+2) = 3;

  

int *tmp = (int *)malloc(8 * sizeof(int));
  
// 실제 배열을 키우는 방법?
for (int i =0; i < 4; i++)
{
	tmp[i] = array[i];
}

array = tmp;
array[4] = 4;
*(array + 5) = 5;
printf("답은 %d\n", array[5]);

free(array);
array = NULL;

// 위의 코드는 사실 좋지 않음
  

// 이 2개의 코드는 사실상 다름
int *array = (int *)malloc(4 * sizeof(int)); 
int array[4]; 
}