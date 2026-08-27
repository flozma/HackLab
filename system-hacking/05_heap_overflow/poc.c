#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define DATA_SIZE 0x20

typedef struct {
  void (*func)(char *);
  char data[DATA_SIZE];
} HEAP_MEMO;

HEAP_MEMO *pointer[5]; // HEAP_MEMO struct pointer array (in BSS / static data)
// == HEAP_MEMO *pointer[5] = { NULL };  pointer array initialization

void jump()
{
  system("/bin/sh");
}


void print_data(char *data)
{
  printf("%s\n", data);
}

void start_process()
{
  pointer[0] = (HEAP_MEMO *)malloc(sizeof(HEAP_MEMO));
  memset(pointer[0], 0, sizeof(HEAP_MEMO)); // initialization
  pointer[0] -> func = print_data;


  pointer[1] = (HEAP_MEMO*)malloc(sizeof(HEAP_MEMO)); // pointer[1] in Stack | malloc(sizeof(HEAP_MEMO)) in Heap
  memset(pointer[1], 0, sizeof(HEAP_MEMO)); // initialization
  pointer[1] -> func = print_data; // struct pointer's func

  // cdmline input
  scanf("%s", pointer[0] -> data); // vulnerability -> %s doesn't prevent input length
  scanf("%s", pointer[1] -> data); // vulnerability -> %s doesn't prevent input length

  // cat data
  pointer[0] -> func(pointer[0] -> data);
  pointer[1] -> func(pointer[1] -> data);
  
}

/**
 * [ Scenario ]
 * 
 * lower address
 * ┌─────────────────────────────┐
 * │ pointer[0]->func            │
 * ├─────────────────────────────┤
 * │ pointer[0]->data[32]        │ ← first scanf input
 * ├─────────────────────────────┤
 * │ heap managing data     │
 * ├─────────────────────────────┤
 * │ pointer[1]->func            │
 * ├─────────────────────────────┤
 * │ pointer[1]->data[32]        │
 * └─────────────────────────────┘
 * higher address
 */



int main(int argc, char *argv[])
{
  start_process();

  return 0;
}