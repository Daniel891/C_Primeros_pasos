#include <stdio.h>

int main() {
    int tabla [5];
    int n,i;
    for (i=0;i<5;i++){
        printf("Elemento %d: ", i);
        scanf("%d", &n);
        tabla[i]=n;
    }
    for (i=0;i<5;i++){
        printf("%d \n", tabla[i]);
    }
    return 0;
}
