#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void main() {

    long int SIZE = 494288000, fd;
    char *fivehundred = malloc(SIZE);
    fd = open("/dev/zero", O_RDONLY);
    read( fd, fivehundred, SIZE-1);
    sleep(500); 
}
