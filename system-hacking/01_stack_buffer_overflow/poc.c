#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vulnerability()
{
  char buffer[64];
  scanf("%s", buffer); 
  // no length limit: may overwrite adjacent stack memory
  // - input longer than the buffer may cause a stack buffer overflow

  /**
   * buffer[64]
   * ↓
   * Overwrites adjacent stack memory
   * ↓
   * saved frame pointer, return address, and etc may be corrupted
   */

  // [Result Expectation]
  // 1. Segmentation fault
  // 2. Unexpected behavior
  // 3. The program may terminate normally
  
  // [safe access]
  // scanf("%63s", buffer)
}

int main(void)
{
  vulnerability();
}