#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[10];
    gets(arr);
    arr[10]='\0';
    
    printf("%s\n",arr);
    //SI NO CONTROLAMOS LA CADENA HABRÁ PROBLEMAS PARA GUARDAR n

    printf("%d", strlen(arr)); //DEVUELVE UN INT CON EL NÚMERO DE CARACTERES DEL ARRAY
}