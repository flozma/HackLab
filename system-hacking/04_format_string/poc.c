#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_LEN 0x40

void jump()
{
  system("/bin/sh");
}


void vulnerability()
{
  char buffer[BUFFER_LEN];
  ssize_t n = read(0, buffer, BUFFER_LEN - 1); // end of string, \0 is not automatically attatched
  if(n > 0) buffer[n] = '\0';
    
  printf(buffer); // interprets not a normal string but buffer as format string

  exit(0);
}

int main()
{
  vulnerability();
  
  return 0;
}