#include <stdio.h>
#include <math.h>

// gcc .\1.c .\externData.c

extern int number;
int number_global = 1;

void function(){
    int x = -1;
    printf("x: %d\n", x);
}

void type_cast(){
    int number = 10;
    float decimal_number;
    decimal_number = (float)number;
    printf("decimal_number: %.1f\n", decimal_number);
}

void static_variables(){
    static int number = 0;
    number++;
    printf("number: %d\n", number);
}

void main(){
    int x = 1;
    function();
    printf("x: %d\n", x);

    printf("number: %d\n", number);
    printf("number_global: %d\n", number_global);

    type_cast();

    static_variables(); // 1
    static_variables(); // 2

    getchar();
}