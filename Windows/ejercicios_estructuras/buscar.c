#include <stdio.h>

int main(int argc, char *argv[]){
    struct host{
        char mac[20];
        char ip[20];
    };

    FILE *fich;

    if (argc!=2){
        printf("ERROR: El programa debe recibir un argumento - {direcIP} ");
        return -1;
    }

    if ((fich= fopen("listado.dat","rb")) == NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    int flag=0;
    struct host r;

    fread(&r,sizeof(r), 1, fich);
    
    while (! feof(fich)){
        if (strcmp(argv[1],r.ip)==0){
            printf("Dirección MAC asignada--> %s", r.mac);
            flag=1;
        }
        fread(&r, sizeof(r), 1, fich);
    }

    if (flag==0){
        printf("La dirección IP está libre");
    }

    fclose(fich);

    return 0;
}