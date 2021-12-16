#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    struct host{
        char mac[20];
        char ip[20];
    };

    char *token;
    token=argv[1];
    int puntos=0;
    const char puntodelim[]=".";
    const char guiondelim[]="-";
    int flag2=0;

    while (*token != '\0') {
        if (flag2 == 2) {
            printf("ERROR: Formato de IP no válido");
            return -1;
        }
		if (*token =='.'){
            flag2++;
            puntos++;
        }else if (isalpha(*token)){
            printf("ERROR: Formato de IP no válido");
            return -1;
        }else flag2=0;
        
		token++;
	}
    token=argv[1];

    if (puntos!=3){
        printf("ERROR: Formato de IP no válido");
        return -1;
    }else {
        token=strtok(argv[1], puntodelim);
        while (token != NULL){
            if (! (atoi(token) <= 255) || ! (atoi(token)>=0)) {
                printf("ERROR: Formato de IP no válido");
                return -1;
            }
            token=strtok(NULL, puntodelim);
        }
    }
}