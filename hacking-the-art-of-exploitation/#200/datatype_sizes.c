#include <stdio.h>

int main() {
  printf("'int' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(int));
  printf("'unsigned int' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(unsigned int));
  printf("'short int' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(short int));
  printf("'long int' 데이터 타입은 \t\t %l.2d 바이트이다.\n", sizeof(long int));
  printf("'long long int' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(long long int));
  printf("'float' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(float));
  printf("'double' 데이터 타입은 \t\t %d 바이트이다.\n", sizeof(double));
}