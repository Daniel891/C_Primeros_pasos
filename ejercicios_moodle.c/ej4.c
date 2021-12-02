#include<stdio.h>

int main(){
    char linea[100];
    int cont1=0,cont2=0;
    FILE *fich1;
    FILE *fich2;

    if ((fich1=fopen("c:/windows/system32/drivers/etc/hosts", "r")) == NULL){
        printf ("Error en la apertura del fichero\n");
        return -1;
    }

    if ((fich2=fopen("c:/tmp/datos.dat", "r")) == NULL){
        printf ("Error en la apertura del fichero nuevo\n");
        return -1;
    }

    fgets(linea,100,fich1);
    while (!feof(fich1)){
        cont1++;
        fgets(linea,100,fich1);
    }

    fgets(linea,100,fich2);
    while (!feof(fich2)){
        cont2++;
        fgets(linea,100,fich2);
    }

    if (cont1==cont2){
        printf("El número de líneas es igual:%d", cont1);
    }else {
        printf("ERROR: No se ha copia bien y las líneas no son las mismas:\n");
        printf("%d %d", cont1, cont2);
    }

    return 0;
}