#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    struct libros{
        char titulo[20];
        char autor[20];
    };
    
    FILE *fich;

    struct libros r;    

    if (argc!=3){
        printf("ERROR:Debes introducir dos parámetros - {'titulo' 'autor'}.");
        return -1;
    }

    if ((fich = fopen("libros.txt", "a+")) == NULL){
        printf("Error en la apertura");
        return -1;
    }

    fread(&r,sizeof(r), 1, fich);
    while (! feof(fich)){
        if (strcmp(argv[1],r.titulo)==0){
            printf("Ese libro ya está registrado");
            return -1;
        }
        fread(&r, sizeof(r), 1, fich);
    }

    strcpy(r.titulo,argv[1]);
    strcpy(r.autor,argv[2]);

    printf("Libro guardado -> %s - %s", r.titulo,r.autor);
    fwrite(&r, sizeof(r), 1, fich);
    fclose(fich);

    return 0;
}