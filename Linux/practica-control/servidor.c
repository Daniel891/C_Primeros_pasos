#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>


#define MAX_BUF  1024

int main() {
    int t;
    int f;

    char *tuberia="/tmp/tub-hosts";
    char msj[MAX_BUF];
    mkfifo(tuberia,0666);

    char *fichero="/etc/hosts";

    t=open(tuberia, O_RDONLY);
    f= open(fichero, O_CREAT | O_RDONLY | O_WRONLY | O_APPEND, 0755);
    
    while(1) {
        if (read (t,msj, MAX_BUF) !=0){
            printf("Recibido: %s\n",msj);
            strcat(msj,"\n");
            write(f,msj, strlen(msj));
        }
    }
    close(f);
    close(t);
    
    unlink(tuberia);
    return 0;
} 