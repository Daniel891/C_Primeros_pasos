#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[10];
    int c=0,n;

    fgets(arr, 11,stdin);
    arr[11]='\0';

    for (n=0;n<=10;n++){
        if (arr[n]== 'a'){
            c=c+1;
        }
    }
    
    printf("La letra 'a' está %d veces en la cadena", c);
}