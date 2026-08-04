#include <stdio.h>

int main() {
  char str[20]; // array = buffer
  
  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'l';
  str[3] = 'l';
  str[4] = 'o';

  printf("Hello World");
  printf("%s\n", str); // 마지막 문자  \0 -> Null Byte (구획문자)
}
