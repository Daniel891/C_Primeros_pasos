#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void controlador ();

int main(int argc, char *argv[]){
    if (signal (SIGUSR1, controlador)== SIG_ERR){
        perror("No se puede cambiar la señal");
    }

    pause();
}

void controlador (){
    printf("Señal interceptada\n");
    exit(1);
}
