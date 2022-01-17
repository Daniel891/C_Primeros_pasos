#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    if (argv !=2){
        printf("Uso: %s pid\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    //ENVÍA LA SEÑAL SIGTERM AL PROCESO INDICADO

    if ((kill(aoti(argv[1]), SIGTERM) == -1){
        exit(EXIT_FAILURE);
    }
}