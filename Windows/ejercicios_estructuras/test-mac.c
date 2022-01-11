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
    const char guiondelim[]="-";
    int flag=0;

    while (*token != '\0') {
        if (flag == 2){
            printf("ERROR: Formato de IP no válido");
            return -1;
        }
        if ((*token ==':') || (*token =='-')){
            *token = '-';
            flag++;
            puntos++;
        }else if (isalpha(*token)){
            switch (*token)
            {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                break;

            default:
                printf("ERROR: Formato de MAC no válido");
                return -1;
            }
            flag=0;
        }else flag=0;

		token++;
	}
    token=argv[2];

    if (puntos!=5){
        printf("ERROR: Formato de MAC no válido");
        return -1;
    }else {
        token=strtok(argv[2], guiondelim);
        while (token != NULL){
            if (strlen(token) != 2){
                printf("ERROR: Formato de MAC no válido");
                return -1;
            }
            token=strtok(NULL, guiondelim);
        }
    }
}