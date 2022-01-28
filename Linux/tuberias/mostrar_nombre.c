#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define MAX_BUF  1024

int main() {
    int t;
    char *tuberia="/tmp/tub-nombres";
    char msj[MAX_BUF];
    mkfifo(tuberia,0666);
    //se abre la tuberia

    while(1) {
        t=open(tuberia, O_RDONLY);
        if (read (t,msj, MAX_BUF) !=0){
            printf("Recibido: %s\n",msj);
            if (msj=='fin'){
                close(t);
                unlink(tuberia);
                return 0;
            }
        }
        close(t);
    }
    unlink(tuberia);
    return 0;
} 