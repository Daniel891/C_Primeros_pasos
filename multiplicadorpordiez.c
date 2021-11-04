#include <stdio.h>
int main(){
    int c=0,n;
    char l[1]="l";

    do{
        printf("Introduce un número: ");
        scanf("%d", &n);

        c=c+n;

        printf("Para terminar pulsar 'N'--> ");
        scanf("%s", &l);
        printf(l);
        c=c*10;
    }
    while (l != "N");
    
    printf("Valor final: %d", c);
    return 0;
}