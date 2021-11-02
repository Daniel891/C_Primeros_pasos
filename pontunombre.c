#include <stdio.h>
int main(){
    char nombre[30];
    printf("Dime tu nombre: ");
    gets(nombre);
    printf("Hola %s", nombre);
    return 0;
}

