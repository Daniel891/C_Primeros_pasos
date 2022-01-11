#include <stdio.h>
int main(){
    int i,n,max=0,min=0;

    for (i=0;i<10;i++){
        printf("Introduce un número: ");
        scanf("%d", &n);

        if (n>max){
            max=n;
        }else min=n;
    }
    
    printf("El número máximo es %d", max);
    printf("\n");
    printf("El número mínimo es %d", min);

    return 0;
}