#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define ADDR_LEN 64

int main()
{
  char addr[ADDR_LEN];
  char buffer[100];

  scanf("> %s", addr);

  sprintf(buffer, "ping %s", addr);
  printf("Command : %s\n", buffer);
  system(buffer);
}


/**
 * Scenario
 * - test with loopback address (127.0.0.1)
 * 
 * 1. user input : "127.0.0.1; whoami;""
 *      (On Linux/macOS, ";" separates shell commands)
 * 2. buffer = "ping 127.0.0.1; whoami"
 * 3. printf() prints : 
 *      Command : ping 127.0.0.1; whoami; \n
 * 4. system(buffer) is called
 * 5. The shell interprets ";" as command separator
 * 6. The shell executes "ping 127.0.0.1"
 * 7. The shell executes "whoami"
 */