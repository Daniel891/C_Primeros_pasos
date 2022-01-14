#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("######   PROCESO 1 ##########\N");
    printf("Esperando.........\n");

    //Espera hasta que llegue la señal

    pause();
}
