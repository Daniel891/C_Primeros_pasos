#include <stdio.h>

int main () {
    int vector []={1,2,3,4,5};
    int i,l,p,a;

    l=sizeof(vector)/sizeof(vector[0])-1;

    for (i=0;i<(l+1)/2;i++){
        a=vector[i];
        vector[i]=vector[l-i];
        vector[l-i]=a;
    }

    for (i=0;i<=l;i++){
        printf("%d \n", vector[i]);
    }

    return 0;
}