#include <stdio.h>

int main(){
    char cadena[100];

    FILE *f= fopen("teoria.txt", "r");

    if (f==NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    }else printf("Fichero abierto\n");

    while (fgets(cadena, 100,f) != NULL){
        printf("%s", cadena);
    }
    fclose(f);
}