#include <stdio.h>

void main(int argc, char *argv[]){
    printf("There were %d command line arguments.\n", argc);
    printf("Program name: '%s'.\n", argv[0]);
    for(int x = 0; x < argc; x++){
        printf("Argument %d: '%s'.\n", x + 1, argv[x]);
    }
}