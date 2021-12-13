#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    struct host{
        char mac[20];
        char ip[20];
    };
    int i;
    FILE *fich;

    struct host r;

    if (argc!=3){
        printf("ERROR:Debes introducir dos parámetros");
    }

    if ((fich = fopen("listado.dat", "ab")) == NULL){
        printf("Error en la apertura");
        return -1;
    }

    strcpy(r.ip,argv[1]);
    strcpy(r.mac,argv[2]);
    printf("%s - %s", r.ip,r.mac);
    fwrite(&r, sizeof(r), 1, fich);

    return 0;
}