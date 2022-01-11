#include <stdio.h>
int main(){
    int n,m;

    printf("Introduce un número para saber si es par o impar: ");
    scanf("%d", &n);
    printf("\n");

    m=n/2;

    if (m*2==n){
        printf("Tu número es par");
    }else printf("Tu número es impar");
    
    return 0;
}