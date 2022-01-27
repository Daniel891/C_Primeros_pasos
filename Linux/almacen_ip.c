#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define MAX_BUF  1024

int main() {
    int t;
    FILE *f;
    char *tuberia="/tmp/tuberiaip";

    char msj[MAX_BUF];
    mkfifo(tuberia,0666);
    //se abre la tuberia

    t=open(tuberia, O_RDONLY);

    /*if ((f = fopen("almacen_ip.dat", "a")) == NULL){
        printf("Error en la apertura");
        return -1;
    }*/
    f = fopen("almacen_ip.dat", "a");
    while(1) {
        if (read (t,msj, MAX_BUF) !=0){
            printf("Recibido: %s\n",msj);            
            fwrite(&msj, sizeof(msj), 1, f);
        }
        
    }
    fclose(f);
    close(t);
    unlink(tuberia);
    return 0;
} 