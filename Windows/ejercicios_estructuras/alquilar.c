#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    struct host{
        char mac[20];
        char ip[20];
    };
    
    FILE *fich;
    FILE *leerfich;

    struct host r;

    char entip[20];
    char entmac[20];

    strcpy(entip,argv[1]);      //SALVAGUARDO LAS ENTRADAS
    strcpy(entmac,argv[2]);

    ////////////COMIENZA EL FILTRO DE LAS ENTRADAS///////////////

    if (argc!=3){
        printf("ERROR:Debes introducir dos parámetros - {direcIP direcMAC}");
        return -1;
    }

    //COMPRUEBO SI LA DIRECCIÓN YA ESTA ASIGNADA
    leerfich=fopen("listado.dat", "rb");
    fread(&r,sizeof(r), 1, leerfich);
    while (! feof(leerfich)){
        if (strcmp(argv[1],r.ip)==0){
            printf("Esa dirección IP ya está asignada");
            return -1;
        }
        fread(&r, sizeof(r), 1, leerfich);
    }

    //EMPIEZA FILTRO IP
    char *token;
    token=argv[1];
    int puntos=0;
    const char puntodelim[]=".";
    int flag2=0;

    while (*token != '\0') {
        if (flag2 == 2) {
            printf("ERROR: Formato de IP no válido");
            return -1;
        }
		if (*token=='.'){
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
    //TERMINA FILTRO IP

    //EMPIEZA FILTRO MAC
    token=argv[2];  //REGARGO LA VARIABLE token
    flag2=0;        //RECARGO LA VARIABLE flag2
    puntos=0;       //USO LA VARIABLE puntos TAMBIÉN PARA LOS GUIONES
    const char guiondelim[]="-";

    while (*token != '\0') {
        if (flag2 == 2){
            printf("ERROR: Formato de IP no válido");
            return -1;
        }
        if ((*token ==':') || (*token =='-')){
            *token = '-';
            flag2++;
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
            flag2=0;
        }else flag2=0;

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
    //TERMINA FILTRO MAC


    //TERMINA EL FILTRO DE LAS ENTRADAS

    if ((fich = fopen("listado.dat", "ab")) == NULL){
        printf("Error en la apertura");
        return -1;
    }

    strcpy(r.ip,entip);
    strcpy(r.mac,entmac);

    printf("Guardada asignación -> %s - %s", r.ip,r.mac);
    fwrite(&r, sizeof(r), 1, fich);
    fclose(fich);
    fclose(leerfich);

    return 0;
}