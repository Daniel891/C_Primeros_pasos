#include <stdio.h>
int main(){
    int n,i;

    printf("Introduce un número para calcular su tabla de multiplicar: ");
    scanf("%d", &n);
    printf("\n");

    for (i=0;i<10;i++){
        printf("\n");
        printf("%d por %d es %d \n", n,i,n*i);
    }
    
    return 0;
}