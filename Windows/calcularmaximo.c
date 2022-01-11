#include <stdio.h>
int main(){
    int i,n,max=0;

    for (i=0;i<5;i++){
        printf("Introduce un número: ");
        scanf("%d", &n);
        if (n>max) max=n;
    }
    
    printf("El número máximo es %d", max);

    return 0;
}