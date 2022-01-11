#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    if (argc<2){
        printf("ERROR: Debes introducir un nombre para crear la carpeta. {nombre}");
        return -1;
    }

    if (! mkdir(argv[1])){
        printf("Creada la carpeta '%s'", argv[1]);
    }else printf("Ya existe una carpeta con ese nombre");
    //printf("Creada la carpeta '%s'", argv[1]);

    return 0;
}