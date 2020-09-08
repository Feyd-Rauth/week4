#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int status = 0;
    do{
        char* line = malloc(sizeof(char) * 256);
        status = system(fgets(line, 256, stdin));
    } while(1);
    return 0;
}