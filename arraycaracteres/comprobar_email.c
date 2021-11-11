#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[31];
    int c=0,n;

    printf("Introduzca su dirección de correo--> ");
    fgets(arr, 31,stdin);
    arr[31]='\0';

    for (n=0;n<=strlen(arr)-1;n++){
        if (arr[n]=='@'){
            c=1;
        }
    }

    if (arr[strlen(arr)-1]== '@') c=0;

    if (c==1){
        printf("Formato de email correcto");
    }else{
        printf("Dirección incorrecta");
    }
}