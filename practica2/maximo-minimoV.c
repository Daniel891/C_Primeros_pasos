#include <stdio.h>
int main(){
    int i,v[5],max=0,min=0,l;

    l=sizeof(v)/sizeof(v[0]);

    for (i=0;i<l;i++){
        printf("Introduce un número: ");
        scanf("%d", &v[i]);

        if (v[i]>max){
            max=v[i];
        }else min=v[i];
    }
    
    printf("El número máximo es %d", max);
    printf("\n");
    printf("El número mínimo es %d", min);

    return 0;
}