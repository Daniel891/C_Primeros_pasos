#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
    int pid;
    int hijo;
    int pidhijo;

    pid=fork(); //Crea un nuevo proceso (hijo)

    if(pid==0) {
        int pid2;
        pid2=fork();
        
        if (pid2==0) {
            printf("Soy el nieto");
            sleep(4);
            exit(1);
        } else{
            pidhijo=wait(&hijo);
            printf("Soy el hijo(%d, hijo de %d) \n ", getpid(), getppid());
        } 
    }
    else{
        printf("Soy el padre(%d,hijo de %d) \n ", getpid(), getppid());
        sleep(3);
    }  
    return 0;

} 