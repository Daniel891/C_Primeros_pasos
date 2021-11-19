#include <stdio.h>

int main(){
    struct ficha{
        int num;
        char nombre [10];
        char casa [10];
    };

    //PARTE PARA METER EL RESULTADO EN UN FICHERO
    FILE *fich;

    if ((fich= fopen("datos.dat","wb")) == NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    int i;
    struct ficha r;

    for (i=0;i<2;i++){
        r.num=i;
        printf("Nombre: ");
        gets(r.nombre);
        printf("Casa: ");
        gets(r.casa);
        fwrite (&r, sizeof(r), 1, fich);
    }

    /*for (i=0;i<3;i++){
        printf("%d - %s - %s\n", r[i].num,r[i].nombre,r[i].casa);
    }*/

    return 0;
}