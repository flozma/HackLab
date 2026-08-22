#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int uninitialized;
const int initialized = 10;

// lX : unsigned long
// p: pointer

int main()
{
  void *heap = (char *)malloc(1024);
  int stack = 1024;
  int pid = getpid();
  char buffer[64];

  printf("age = %d", stack); // terminal(print out on stdout)
  sprintf(buffer, "process-%d", pid); // save result on string buffer
  sprintf(buffer, "cat /proc/%d/maps", pid); 

  printf("===========================\n");

  printf("Address of function : 0x%p\n", &main);
  printf("Address of initialized data : 0x%p\n", &initialized);
  printf("Address of uninitialized data : 0x%p\n", &uninitialized);

  printf("Address of heap : 0x%p\n", heap);
  printf("Address of stack : 0x%p\n", &stack);

  free(heap);

  return 0;
}