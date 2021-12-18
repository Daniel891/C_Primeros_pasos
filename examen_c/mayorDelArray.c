#include <stdio.h>

int main(){
    char cadena[15];
    int numeros[10];
    int i=0;
    int max;

    FILE *f= fopen("numeros.txt", "r");

    if (f==NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    }

    fgets(cadena, 15,f);

    while (!feof(f)){
        printf("%s", cadena);
        numeros[i]=atoi(cadena);
        fgets(cadena, 15,f);
        i++;
    }

    max=numeros[0];
    int tama=sizeof(numeros)/sizeof(numeros[0]);


    for (i=0;i<tama;i++){
        if (numeros[i]>max) max=numeros[i];
    }

    printf("El máximo es: %d\n", max);

    fclose(f);

    return 0;
}