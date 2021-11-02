#include <stdio.h>

int main () {
    int vector [5]; int vector1 []={1,2,3,4,5};
    int i, suma, max, min;
    float media;

    /*for (i=0;i<5;i++){
        printf("Introduce la componente %d :", i);
        scanf("%d", &vector[i]);
    }

    for (i=0;i<5;i++){
        printf("%d \n", vector[i]);
    }*/

    /*for (i=0;i<5;i++){
        suma=suma+vector1[i];
    }

    media=suma/5;
    printf("Media= %f\n", media);*/

    max=vector1[0];min=vector1[0];

    for (i=0;i<5;i++){
        if (vector1[i]>max) max=vector1[i];
        if (vector1[i]<min) min=vector1[i];
    }

    printf("El máximo es: %d\n", max);
    printf("El mínimo es %d\n", min);

    return 0;
}