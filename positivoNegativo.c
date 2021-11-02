#include <stdio.h>
int main(){
    int n;
    printf("Introduce un número para saber si es positivo o negativo: ");
    scanf("%d", &n);
    
    if (n>0) {
        printf("El número %d es positivo", n);
    }else if (n<0){
        printf("El número %d es negativo");
    }
    else printf("El número %d no es ni positivo ni negativo");
    
    return 0;
}
