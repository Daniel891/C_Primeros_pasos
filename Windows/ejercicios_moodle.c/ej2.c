#include<stdio.h>

int main(){
    char linea[100];
    int i,cont=0,coment=0;
    FILE *fich;

    if ((fich=fopen("c:/windows/system32/drivers/etc/protocol", "r")) == NULL){
        printf ("Error en la apertura del fichero\n");
        return -1;
    }

    fgets(linea,100,fich);

    while (!feof(fich)){
        cont++;
        if (linea[0]!='#'){
            printf("%s", linea);
            coment++;
        }
        fgets(linea,100, fich);
    }

    printf("El número de líneas es: %d\n", cont);

    printf("El número de comentarios es: %d\n", coment);

    return 0;
}