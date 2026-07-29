#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define FLAG_SIZE 0x45


void init() {
  // buffering off to process directly with I/O
  setvbuf(stdin, NULL, 2, 0);
  setvbuf(stdout, NULL, 2, 0);
}


int main(void) {
  int fd;
  char *flag;

  flag = (char *)malloc(FLAG_SIZE);

  fd = open("./flag", O_RDONLY); // O_RDONLY = 0x0000
  
  read(fd, flag, FLAG_SIZE);
  
  char cmp_str[10] = "Hello_world";
  char input_str[10];

  printf("Enter \"Hello_world\" : ");
  scanf("%9s", input_str);

  if(strcmp(cmp_str, input_str) == 0) {
    puts("Welcome to the system security world");

    // print flag
    puts(flag); // pointer argument
  }

  return 0;
}