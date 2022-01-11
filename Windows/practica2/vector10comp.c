#include <stdio.h>

int main () {
    int vector [10];
    int i;

    for (i=0;i<=9;i++){
        printf("Introduce la componente %d :", i);
        scanf("%d", &vector[i]);
    }

    printf("Has creado el vector : [");
    for (i=0;i<8;i++){
        printf("%d, ", vector[i]);
    }
    printf("%d", vector[10]);
    printf("]");

    return 0;
}