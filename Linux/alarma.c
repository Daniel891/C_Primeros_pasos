#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void manejador();
int s=0;
int m=0;

int main() {
    signal(SIGALRM, manejador);
    printf("\nTiempo: %d:%d\n",s,m);
    while (1) { 
    alarm(1); //ENVÍA LA SEÑAL SIGALARM (AL PROGRAMA EN SÍ MISMO)
    pause();
    } 
}

void manejador() {
    s++;
    m++;
    if (s==61){
        s=0;
        m++;
    }
    if (m=61) m=0;
    printf("\nTiempo: %d:%d\n",m,s);
} 