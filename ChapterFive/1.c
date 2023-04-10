/*
&: Endereço;
*: Valor;
*/

#include <stdio.h>

void main(){
    int a;
    int *pointer_a;
    pointer_a = &a;

    a = 10;

    printf("%d\n", a); // Valor
    printf("%d\n", *pointer_a); // Valor

    printf("%p\n", &a); // Endereço
    printf("%p\n", pointer_a); // Endereço

    // *pointer_a++; // Aumenta o endereço!
    // ++*pointer_a; // Aumenta o valor!

    printf("%d\n", a); // Valor
    printf("%d\n", *pointer_a); // Valor
}