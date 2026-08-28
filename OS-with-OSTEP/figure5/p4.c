#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  int rc = fork();

  if(rc < 0)
  {
    fprintf(stderr, "fork failed\n");
    exit(1);
  } 
  else if(rc == 0)
  {
    // child : redirect standard output to a file
    close(STDOUT_FILENO); // close 1(fd) -> stdout fd(file descriptor) 
    open("./p4.output", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU); // new open file "p4.output" will be the 1(fd)
    // redirect t o p4.output, instead showing it on screen

    // now exec program "wc"
    char *myargs[3];
    myargs[0] = strdup("wc"); 
    myargs[1] = strdup("p4.c"); // arg : file to count mark end of array
    myargs[2] = NULL; 

    execvp(myargs[0], myargs); // runs word count
  }
  else 
  {
    // parent process goes down this path (main)
    int rc_wait = wait(NULL);
    printf("parent of %d (rc_wait : %d) (pid : %d)", rc, rc_wait, (int *)getpid());
  }

  return 0;
}