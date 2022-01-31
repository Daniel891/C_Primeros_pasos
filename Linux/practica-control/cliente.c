#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
    int t;
    char *tuberia="/tmp/tub-hosts";
    t=open(tuberia, O_WRONLY);

    FILE *f;
    f = fopen("dominios", "r");
    char cadena[100];

    while (fgets(cadena, 100,f) != NULL){
        write(t,cadena,sizeof(cadena));
    }
    fclose(f);
    close (t);
    return 0;
} 