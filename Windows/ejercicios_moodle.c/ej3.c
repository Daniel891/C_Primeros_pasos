#include<stdio.h>

int main(){
    char linea[100];
    FILE *fich1;
    FILE *fich2;

    if ((fich1=fopen("c:/windows/system32/drivers/etc/hosts", "r")) == NULL){
        printf ("Error en la apertura del fichero\n");
        return -1;
    }

    if ((fich2=fopen("c:/tmp/datos.dat", "w")) == NULL){
        printf ("Error en la apertura del fichero nuevo\n");
        return -1;
    }

    fgets(linea,100,fich1);

    while (!feof(fich1)){
        fprintf(fich2, "%s", linea);
        fgets(linea,100, fich1);
    }

    printf("hosts -----> datos.dat\n");

    printf("Copia completada");

    return 0;
}