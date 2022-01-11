#include <stdio.h>

int main(){
    char cad[2];
    char linea[200];
    int i;

    system("powershell ps > c:\\lista.txt");
    FILE *fich;

    if ((fich=fopen("c:\\lista.txt", "r"))==NULL);{
        printf ("Error en la apertura del fichero\n");
        return -1;
    }

    fgets(linea,200,fich);

    while (!feof(fich)){
        printf("%s", linea);
        fgets(linea,200, fich);
    }

    gets(cad);

    return 0;
}