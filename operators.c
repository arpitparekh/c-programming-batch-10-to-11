#include<stdio.h>

main(){

    // operators  // symbols

    // arithmetic operators

    // + - / * %

    int a = 12;
    int b = 13; 

    float x = 12.00;
    float y = 13.00;

    printf("div is %lf  ",a/b);
    printf("div is %lf  ",x/y);

    int k = 6;
    int l = 10;

    printf("Mod of two number is %d  ",k%l);

    // 1234 % 10 = 4
    printf("%d  ",1234 % 10);
    // 1234 / 10 = 123
    printf("%d    ",1234 / 10);

    // conditional operators

    // < > <= <= == !=  // gives zero and one 

    printf("%d    ",k!=l);

    // logic operators  //  &&   ||   !      // combine conditions

    // =  // asignment operator

    int g = 4;
    int h = 56;

    int o = !(g>20) ;

    printf("%d   ",o);

    // increment - decrement operator


    // q++  // ++q

    int p = 34;
    int q = 24;

    printf("%d   ",++q); // 25  // q = 25
    printf("%d   ",q++); // 25  // q = 26
    printf("%d   ",++q); // 27  // q = 27
    printf("%d   ",q);   // 27
    printf("%d   ",q);   // 27

    printf("%d   ",--q); // 26 q = 26
    printf("%d   ",q--); // 26 q = 25
    printf("%d   ",--q); // 24 q = 24
    printf("%d   ",q--); // 24 q = 23  
    printf("%d   ",q++); // 23 q = 24
    printf("%d   ",q--); // 24 q = 23
    printf("%d   ",q);  // 23

    //////////////////


    int number = 13;

    number = 45;  // re_assign

    int y; // declare
    y = 67; // assign
    y = 78; // re-assign

    // assignment operator

    // = += -= /= *= %=

    int f = 34;
    
    f *= 10;

    printf("%d   ",f); 


}