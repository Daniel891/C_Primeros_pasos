#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char cadena[100];

    FILE *f= fopen("escritos.txt", "w"); //para sobreescribir poner a (de apend o algo asi)

    if (f==NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    /* PRIMERA FORMA DE HACERLO
    for (i=0;i<3;i++){
        printf("Profesor -> ");  //Muestro en pantalla
        gets(cadena);  //Capturo lo que se escriba al lado de profesor
        fprintf(f,"%s %c",cadena, '\n'); //Guardo lo que se ha escrito y salto de línea

        printf("Asignatura -> ");
        gets(cadena);
        fprintf(f,"%s %c",cadena, '\n'); //%c es de caracter
    }*/

    //SEGUNDA MANERA DE HACERLO

    char prof[20];
    char asig[20];

    for (i=0;i<3;i++){
        printf("Profesor -> ");  //Muestro en pantalla
        gets(prof);
        printf("Asignatura -> ");
        gets(asig);

        strcat(prof,"-");
        strcat(prof,asig);
        fprintf(f,"%s %c",prof, '\n');
    }

    fclose(f);

    return 0;
}