#include <stdio.h>
#include <string.h>


int main ()
{
    int j,t;
    char cadena[10];
    int f=0;
    gets(cadena);
    cadena[10]='\0';
    int l=strlen(cadena);
    t=(int) l/2;

    for(j=0;j<t;j++){
        if(cadena[j]!=cadena[l-j-1]){
            f=1;
        }
    }

    if (f==0){
        printf ("Si que es un palíndromo");
    }else{
        printf ("No es un palíndromo");
    }
}