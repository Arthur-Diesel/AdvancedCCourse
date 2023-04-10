/*
Define the structure and its members.
Declare a variable of that particular structure type.
*/

#include <stdio.h>
#include <string.h>

struct person;
void showStruct(struct person p);
void resetStruct(struct person* p);
struct person generatePerson();

struct person
{
    char name[32];
    int age;
    float iq;
};

void showStruct(struct person p)
{
    printf("Person...\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("IQ: %.2f\n", p.iq);
}

void resetStruct(struct person* p) {
    strcpy(p->name, "");
    p->age = 0;
    p->iq = 0.00;
}

void main()
{
    struct person author;
    strcpy(author.name, "Arthur Diesel Ogg");
    author.age = 21;
    author.iq = 135.5;
    showStruct(author);
    resetStruct(&author);
    showStruct(author);
    struct person generated = generatePerson();

    struct person persons[10] = {
        { "Arthur", 21, 135 },
        { "Teste", 22, 137 }
    };
    
    /*
    persons[0] = generated;
    persons[1] = author;
    */
}

struct person generatePerson(){
    struct person generated;
    return generated;
}