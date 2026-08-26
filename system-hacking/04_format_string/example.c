#include <stdio.h>

int main()
{
  char buffer[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int count;

  printf("%s%n\n", buffer, &count); 
  
  // %n = Store the number of characters printed so far at the specified address.
  // buffer's actual length = 26
  // &count = memory address where the variable count is stored
  printf("Count: %d\n", count);
}