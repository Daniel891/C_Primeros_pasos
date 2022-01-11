#include <stdio.h>

int main(){
    int i;
    char cadena[20];

    FILE *f= fopen("escritos.txt", "r"); //para sobreescribir poner a (de apend o algo asi)

    if (f==NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    }

    /*FORMA UNO
    for (i=0;i<3;i++){
        fgets(cadena, 20, f);
        printf("Profesor %s", cadena);

        fgets(cadena, 20,f);
        printf("Módulo: %s",cadena);
    }*/

    //FORMA DOS
    char *token;
    char delimitador[]="-";

    for (i=0;i<3;i++){
        fgets(cadena, 20, f);
        token=strtok(cadena, delimitador);
        printf("Profesor %s", cadena);

        token=strtok(NULL, delimitador);
        printf("Asignatura %s", cadena);
    }


    fclose(f);

    return 0;
}