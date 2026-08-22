#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * [ Stack ]
 * higher address
┌──────────────────────┐
│ "/bin/sh" address    │ ← system()'s first argument
├──────────────────────┤
│ fake return address  │
├──────────────────────┤
│ system() address     │ ← overwrite vulnerability()'s return address
├──────────────────────┤
│ AAAAAAAAA...         │ ← padding
├──────────────────────┤
│ buf[64]              │
└──────────────────────┘
 * lower address
 */

void vulnerability()
{
  char buffer[64];
  scanf("%s", buffer); 

}

int main(void)
{
  vulnerability();
}