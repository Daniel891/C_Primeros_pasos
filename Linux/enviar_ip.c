#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    if (argc !=2){
        exit(EXIT_FAILURE);
    }
    int t;
    char *tuberia="/tmp/tuberiaip";
    t=open(tuberia, O_WRONLY);

    write(t,argv[1],sizeof((argv[1]+1)));
    close (t);
    return 0;
} 