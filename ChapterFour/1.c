#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void populate(int *array);
void showArray(int *array);
void swapFirstLast(int *array);

void main(){
    int array[SIZE];

    populate(array);
    showArray(array);
    swapFirstLast(array);
    showArray(array);
}   

void populate(int *array){
    srand((unsigned)time(NULL));
    for(int x = 0; x < SIZE; x++){
        array[x] = rand() % 100 + 1;
    }
}

void showArray(int *array){
    for(int x = 0; x < SIZE; x++) {
        printf("%d\n", array[x]);
    }
}

void swapFirstLast(int *array){
    int aux = 0;
    aux = array[0];
    array[0] = array[SIZE - 1];
    array[SIZE - 1] = aux;
}