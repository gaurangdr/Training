#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
        //A null terminated array of character 
        //pointers
//        char *args[]={"./bool",NULL};
//		printf(" %d\n",  execvp(args[0], args));
    	printf(" %d\n",  execvp("./bool", NULL));
			printf("FAIL\n");
     
        /*All statements are ignored after execvp() call as this whole 
        process(execDemo.c) is replaced by another process (EXEC.c)
        */
        printf("Ending-----");
     
    return 0;
}
