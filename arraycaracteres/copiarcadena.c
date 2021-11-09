#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[10],copia[10];
    gets(arr);
    arr[10]='\0';
    printf("%s\n",arr);

    //COPIAR UNA CADENA EN OTRA
    strcpy(copia,arr);
    printf("%s\n",copia);

    //CONCATENAR
    strcat(arr,copia);
    printf("%s\n", arr);
}