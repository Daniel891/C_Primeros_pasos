#include <stdio.h>

int main(){
    struct registro{
        char codigo[20]; 
        int precio;
        int cantidad;
    };

    FILE *fich;

    if ((fich= fopen("ventas.txt","rb")) == NULL){
        printf("Error al abrir el fichero\n");
        return -1;
    };

    int total=0;
    int flag=0;
    int importe;
    struct registro r;

    fread(&r,sizeof(r), 1, fich);
    
    while (! feof(fich)){
        importe=((r.precio)*(r.cantidad));
        printf("%s - %d \n", r.codigo, importe);        
        total=total+importe;
        fread(&r, sizeof(r), 1, fich);
    }

    printf("\nTOTAL - %d", total);

    fclose(fich);

    return 0;
}