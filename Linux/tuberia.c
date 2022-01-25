#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define MAX_BUF  1024

int main() {
    int t;
    int f;
    char *tuberia="/tmp/tuberia";
    char *fichero="/home/alumno/mensajes.txt";
    char msj[MAX_BUF];
    mkfifo(tuberia,0666);
    //se abre la tuberia

    while(1) {
        t=open(tuberia, O_RDONLY);
        if (read (t,msj, MAX_BUF) !=0){
            printf("Recibido: %s\n",msj);
            f=open(fichero, O_APPEND);
            write(f,msj,sizeof(msj));
        }
        close(f);
        close(t);
    }
    unlink(tuberia);
    return 0;
} 

