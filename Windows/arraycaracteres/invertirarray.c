#include <stdio.h>
#include <string.h>


int main ()
{
    char arr[10];
    char a;
    int l,i,larg;

    gets(arr);
    arr[10]='\0';

    l=strlen(arr);
    larg=(int) l/2;

    for (i=0;i<larg;i++){
        a=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=a;
    }

    printf("%s",arr);
}