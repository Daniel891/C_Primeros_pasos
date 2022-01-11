#include <stdio.h>
int main(){
    float n=0,i=1,r=0;

    printf("INTRODUCE NÚMEROS PARA CALCULAR SU MEDIA. PARA EJECUTAR PULSAR 0");
    printf("\n");

    while (i!=0){
        printf("Introduce un número: ");
        scanf("%f", &i);
        printf("\n");

        n=n+i;
        r=r+1;
    }

    r=r-1;
    printf("La media de todo es: %f", n/r);
    
    
    return 0;
}