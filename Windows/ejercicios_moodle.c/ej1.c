#include<stdio.h>

int main(){
    char linea[100];
    int i;
    FILE *fich;

    if ((fich=fopen("c:/windows/system32/drivers/etc/hosts", "r")) == NULL){
        printf ("Error en la apertura del fichero\n");
        return -1;
    }

    fgets(linea,100,fich);

    while (!feof(fich)){
        if (linea[0]!='#'){
            printf("%s", linea);
        }
        fgets(linea,100, fich);
    }

    return 0;
}