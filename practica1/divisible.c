#include <stdio.h>

int main(){
    int a,b;

    printf("CALCULAR SI EL PRIMER NÚMERO ES DIVISIBLE POR EL SEGUNDO");
    printf("\n");

    printf("Primer número: ");
    scanf("%d", &a);
    printf("Segundo número: ");
    scanf("%d", &b);
    printf("\n");

    if (a%b==0){
        printf("%d es divisible entre %d", a,b);
    }
    else printf("No son divisibles");

    return 0;
}