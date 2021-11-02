#include <stdio.h>

int main ()
{
    int i,j;
    int M[3][4];

    //Primero introduzco la matriz
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++){
            M[i][j]=i+j;
        }
    }

    //Segundo la recorro para mostrarla
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++){
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}