#include <stdio.h>

int main () {
    int vector []={1,2,3,4,5};
    int i,l;

    l=sizeof(vector)/sizeof(vector[0]);

    printf("El tamaño del vector es: %d \n", l);

    for (i=0;i<l;i++){
        printf("%d ", vector[i]);
    }

    return 0;
}