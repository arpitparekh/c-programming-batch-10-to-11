#include<stdio.h>
#include<string.h>

struct Person{                     // blueprint
    char name[20];  // string
    int age;        // int
    float salary;   // float
}p1,p2;

void main(){

    // strcture is a collection of variable
    // strcuture is a block of code

    // to access the database from the strcuture we need to create a varaible of that structure

    // declaring a varaible of struct database

    strcpy(p1.name, "vatsal");
    p1.age = 20;
    p1.salary = 34000.56;

    strcpy(p2.name, "jimit");
    p2.age = 22;
    p2.salary = 12000.45;

    printf("person 1 name is %s\n", p1.name);
    printf("person 1 age is %d\n", p1.age);
    printf("person 1 salary is %f\n", p1.salary);

    printf("person 2 name is %s\n", p2.name);
    printf("person 2 age is %d\n", p2.age);
    printf("person 2 salary is %f\n", p2.salary);
}