#include <stdio.h>

int main(){
    struct ficha{
        int num;
        char nombre [10];
        char casa [10];
    };

    //PARTE PARA METER EL RESULTADO EN UN FICHERO
    FILE *fich;

    if ((fich= fopen("datos.dat","rb")) == NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    int i;
    struct ficha r;

    fread(&r,sizeof(r), 1, fich);
    while (! feof(fich)){
        printf("%d: %s: %s\n", r.num, r.nombre, r.casa);
        fread(&r, sizeof(r), 1, fich);
    }

    fclose(fich);

    return 0;
}