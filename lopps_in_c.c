#include<stdio.h>

main(){


    // conditions revision
    // if else // if elseif else // nested if
    // switch case break

    // loops  // repetetive tasks

    // while
    // do..while
    // for

    // intital value
    // condition
    // increment  // decrement

    ////////////////////////////// while loop

    int a = 10;

    while(a<20){               // loop run untill the condition is false
        printf("%d ",a);
        a++;
    }

    printf("\n");

    int x = 1;
    while(x<=100){
        printf("%d ",x);
        x++;
    }

    printf("\n");

    int g = 100;
    while(g>=1){
        printf("%d ",g);
        g--;
    }

    printf("\n");

    char ch = 'a';
    while(ch<='z'){
        printf("%c ",ch);
        ch++;
    }


    printf("\n");

    ////////////////////////////// do while loop

    // intial value
    // increment
    // condition

    int h = 50;

    do{

        printf("%d ",h);
        h++;

    }while(h<=60);

    printf("\n");

    char ch1 = 'A';

    do{

        printf("%c ",ch1);
        ch1++;

    }while(ch1<='Z');

    ///////////////////////////// for loop

     printf("\n");

    // for intial value / condition / increment decrement / in one statement

    for(int k=1;k<=10;k++){
        printf("%d ",k);
    }

    printf("\n");

    for(int a = 20;a>=1;a--){
        printf("%d ",a);
    }

    printf("\n");

    for(int ch = 'Z';ch>='A';ch--){
        printf("%c ",ch);
    }

}