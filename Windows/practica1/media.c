#include <stdio.h>
int main(){
    float n,i,r;

    printf("Introduce un número: ");
    scanf("%f", &n);
    
    printf("Introduce otro número: ");
    scanf("%f", &i);
    printf("\n");

    r=(n+i)/2;

    printf("La media de %f y %f es: %f \n", n,i,r);
    
    return 0;
}