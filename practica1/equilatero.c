#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;

    printf("INTRODUCIR 3 NÚMEROS ENTEROS PARA COMPROBAR SI FORMARÍAN UN TRIÁNGULO EQUILÁTERO");
    printf("\n");

    printf("Primer número: ");
    scanf("%d", &a);
    printf("Segundo número: ");
    scanf("%d", &b);
    printf("Tercer número: ");
    scanf("%d", &c);
    printf("\n");

    if ((pow(a,2))==(pow(b,2)+pow(c,2))){
        printf("Pueden formar un triángulo rectángulo");
    }else printf("No forman un triángulo rectángulo");

    return 0;
}