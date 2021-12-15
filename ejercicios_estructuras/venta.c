#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    struct registro{
        char codigo[20]; 
        int precio;
        int cantidad;
    };

    int prec=atoi(argv[2]);
    int cant=atoi(argv[3]);

    FILE *fich;

    struct registro r;

    if (argc!=4){
        printf("ERROR:Debes introducir tres parámetros - {CODIGO PRECIO CANTIDAD}");
        return -1;
    }

    //validar que las direcciones podrian existir

    if ((fich = fopen("ventas.txt", "ab")) == NULL){
        printf("Error en la apertura");
        return -1;
    }

    strcpy(r.codigo,argv[1]);
    r.precio=prec;
    r.cantidad=cant;

    printf("%s - %d - %d", r.codigo,r.precio, r.cantidad);
    fwrite(&r, sizeof(r), 1, fich);

    return 0;
}