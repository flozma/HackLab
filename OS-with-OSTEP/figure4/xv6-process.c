#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// registers xv6 will save and restore to stop and subsequently restart a process
struct context {
	int eip; 
	int esp;
	int ebx;
	int ecx;
	int edx;
	int esi;
	int edi;
	int ebp;
}

// the different state s a process can be in
enum proc_state { UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc {
	char *mem; // start of process memory
	uint sz; // size of process memory
	char *kstack; // bottom of kernel stack for this process
	
	enum proc_state state; // process state
	int pid; // process ID
	struct proc *parent; // Parent Process
	void *chan; // If !zero, sleeping on chan
	int killed; // If !zero, has been killed
	struct file *ofile[NOFILE]; // Open files
	struct inode *cwd; // Current Directory
	struct context context; // Switch here to run process
	struct trapframe *tf // Trap frame for the current interrupt
}