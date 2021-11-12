#include <stdio.h>
#include <string.h>


int main ()
{
    char arr[10],a;
    int l,i;

    gets(arr);
    arr[10]='\0';
    

    l=strlen(arr);

    for (i=0;i<(l-1)/2;i++){
        a=arr[i];
        arr[i]=arr[l-i];
        arr[l-i]=a;
    }

    printf("%s\n",arr);
}