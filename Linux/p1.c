#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void controlador ();
int i=0;
int main () {
    if (signal (SIGUSR1, controlador) == SIG_ERR) {
        perror("Error");
    } 

    printf("Esperando\n");
    while(1){
        pause();
    }
} 

void controlador(){
    i++;
    printf("Has entrado %d vez\n",i);
    signal(SIGUSR1, controlador);
} 