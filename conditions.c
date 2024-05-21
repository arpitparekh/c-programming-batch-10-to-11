#include<stdio.h>

main(){

    // condition in c

    int a = 12;
    int b = 13;
    int c = 14;

    printf("%d   ",a<b);

    printf("Hello world   ");

    // escape sequence // \n  \t

    printf("\nHello \nWorld\n");

    printf("Hello\tStudent\n");

    // if else // switch

    if(a<b){
        printf("\nIf Statement is Executed");
        printf("\nIf Staement again");
    }else{
        printf("\nElse Statement is Executed");
    }

    if(a>b){                             // if else ledder  // 12 13 14
        printf("\nIf block");
    }else if(a>=b){
         printf("\nElse if block 1");
    }else if(a==b){
         printf("\nElse if block 2");
    }else{
        printf("\nElse block");
    }

    if(a<b || a>b){
        printf("\nIf Block");
    }
    

    // ternary operator  ?:

    // a<b ? printf("If") : printf("Else");


    int x = 12;
    int y = 13;
    int z = 55;

    if(x<y){    // nested if else

        if(x==y){
            
            printf("\nInner if");

        }else{
            
            if(y>z){
                printf("\nInner Inner if");
            }else{
                printf("\nInner Inner else");
            }

        }

    }else{
        printf("\nelse");
    }

    ///////////////////////////////////////////////////////

    // switch

    int k = 44;

    switch(k){

        case 10:
            printf("\nNumber 10");
        case 12:
            printf("\nNumber 12");
        case 34:
            printf("\nNumber 34");    
    }

    char ch = 'b';

    switch(ch){

        case 'b':
            printf("\nCharacter b");
            break;
        case 'g':
            printf("\nCharacter g");
            printf("\nCharacter g");
            break;
        case 'a':
            printf("\nCharacter a");
            break;
        default:
            printf("\nDefault Case");
    }


    int c1 = 23;
    int v1 = 25;

    if(c1<v1){
        printf("\n%d is greater",v1);
    }else{
        printf("\n%d is greater",c1);
    }


    int a2 = 100;
    int b2 = 45;
    int c2 = 5;

    if(a2>b2 && a2>c2){
        printf("\n%d is greater",a2);
    }else if(b2>c2){
        printf("\n%d is greater",b2);
    }else{
        printf("\n%d is greater",c2);
    }

    int a2 = 100;
    int b2 = 45;
    int c2 = 5;
    int d2 = 56;

}