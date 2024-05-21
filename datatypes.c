#include<stdio.h>

main(){

    // datatypes

    // 23

    short int a = 55;   // a  = variable name // 23 variable value  // 0..9  // 1 0 

    // dtatype name // variable name = value;

    // datatype => size

    int phone_number = 900000000;  // declaration and intitaliztion one statement

    long int code = 32432234324324324;

    long long int code2 = 435435345354354354;

    int a1;  // declaration

    a1 = 12;  // intialization

    float height = 3434.34;

    double weight = 34343242.324324;

    long double value = 3243243243242.234324324;

    char ch = ',';

    // format specifier

    printf("Hello %d world    ",phone_number);

    printf("this %hd is short int    ",a);

    printf("this %d is int and %hd is short int    ",phone_number,a);

    printf("%ld        ",code);

    printf("%lld   ",code2);

    printf("float value is %f    ",height);

    printf("float value is %.2f    ",height);

    printf("double value is %.3lf    ",weight);

    printf("character is %c       ",ch);

    printf("long double is %llf   ",value);


    int m = 12;
    int n = 13;

    printf("sum of %d and %d is %d    ",m,n,m+n);

    printf("%d * %d = %d    ",m,n,m*n);

}