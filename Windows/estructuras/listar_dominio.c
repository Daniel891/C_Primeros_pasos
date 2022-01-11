#include <stdio.h>

int main(){
    struct ficha{
        char dominio [10];
        char ip [10];
    };

    //PARTE PARA METER EL RESULTADO EN UN FICHERO
    FILE *fich;

    if ((fich= fopen("dominio.dat","rb")) == NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    int i;
    struct ficha r;

    fread(&r,sizeof(r), 1, fich);
    while (! feof(fich)){
        printf("%s %s\n", r.dominio, r.ip);
        fread(&r, sizeof(r), 1, fich);
    }

    fclose(fich);

    return 0;
}