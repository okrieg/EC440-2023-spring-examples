int main(int argc, char* argv[]) 
{
   pid_t pid;
   if((pid = fork()) > 0) 
   { 
      /* Parent */ 
      printf(“hello parent\n”);
   } else { 
      /* Child */ 
      printf(“hello child\n”);
   }
} 
