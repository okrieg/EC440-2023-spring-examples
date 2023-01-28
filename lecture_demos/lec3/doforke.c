void doforke(char *prog)
{
  pid_t cpid;
  cpid = fork();
  if (cpid < 0) {
    perror("fork failed\n");
    exit(-1);
  }

  if (cpid != 0) {
    // parent code, we need to wait for child

  ppid = getppid();
  mypid = getpid();

    /* Parent code */ 
    printf("hello, from parent with pid %d, pid of child is %d\n", mypid, cpid);
  } else if (cpid == 0) {
    /* Child code */
    printf("hello, I am child with pid %d, my parent is %d\n", mypid, ppid);
  } else {
    perror("fork failed\n");
    exit(-1);
  }
  return 0;
} 
