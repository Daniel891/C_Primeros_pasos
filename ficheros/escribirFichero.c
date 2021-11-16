#include <stdio.h>

int main(){
    int i;
    char cadena[100];

    FILE *f= fopen("escritos.txt", "w"); //para sobreescribir poner a (de apend o algo asi)

    if (f==NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    }else printf("Fichero abierto\n");

    for (i=0;i<5;i++){
        gets(cadena);
        fprintf(f,"%s" "%c",cadena,'\n'); //%c es de caracter
    }
    fclose(f);

    return 0;
}