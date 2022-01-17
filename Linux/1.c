#include <fcntl.h>

int main(){
    system("clear");
    printf("#### FICHERO /ETC/PASSWORD  #### ");
    char cadena[100];
    int leidos;
    int fd=open("/etc/passwd", O_RDONLY);
    if (fd==-1){
        perror("Error al abrir el fichero\n");
        exit(-1);
    }
    while (leidos=read(fd,cadena,100)){

    } 
} 