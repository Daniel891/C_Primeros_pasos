#include <stdio.h>

int main ()
{
    char arr[10];
    int n=16;

    //gets(arr); //ESPERA HASTA PULSAR INTRO
    fgets(arr, 10,stdin); //CON ESTA FUNCIÓN NO TIENES PROBLEMA SI ENTRAN MAS DE 10 NÚMEROS
    arr[10]='\0';
    printf("%s\n",arr);
    //SI NO CONTROLAMOS LA CADENA HABRÁ PROBLEMAS PARA GUARDAR n

    printf("%d", n);
}