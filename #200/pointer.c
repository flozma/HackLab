#include <stdio.h>
#include <string.h>


int main() {

  char str_a[20];
  char *str_ptr;
  char *str_ptr2;


  strcpy(str_a, "Hello World\n");
  str_ptr = str_a;
  printf(str_ptr); // Hello World

  str_ptr2 = str_ptr + 2; // pointer 2만큼 더 이동 (좌 -> 우) | e와 l 사이
  printf(str_ptr2); // llo world

  strcpy(str_ptr2, "y you guys!\n");
  printf(str_ptr); // hey you guys!
}