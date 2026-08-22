#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int uninitialized;
const int initialized = 10;

// Proof of Concept [01 Memory Layout]
// lX : unsigned long
// p: pointer
// `make` : execute Makefile

int main()
{
  void *heap = (char *)malloc(1024);
  int stack = 1024;
  int pid = getpid();
  char buffer[64];

  printf("age = %d\n", stack); // terminal(print out on stdout) 
  sprintf(buffer, "process-%d\n", pid); // save result on string buffer
  printf("Address of buffer : %s\n", buffer);
  system(buffer); // execution on system
  
  sprintf(buffer, "cat /proc/%d/maps\n", pid); 
  printf("Address of buffer : %s\n", buffer);
  system(buffer); // execution on system

  printf("===========================\n");

  printf("Address of function : %p\n", &main);
  printf("Address of initialized data : %p\n", &initialized);
  printf("Address of uninitialized data : %p\n", &uninitialized);

  printf("Address of heap : %p\n", heap);
  printf("Address of stack : %p\n", &stack);
  printf("Address of buffer : %p\n", buffer);

  free(heap);

  return 0;
}