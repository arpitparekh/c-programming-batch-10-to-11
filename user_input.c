#include<stdio.h>

main(){

    // printf()

    // scanf()  // & memory reference operator

    // printf("Please Enter Values\n");
    // int a;
    // scanf("%d",&a);

    // printf("%d is user input\n",a);

    // int a,b;

    // scanf("%d",&a);
    // scanf("%d",&b);

    // scanf("%d%d",&a,&b); // take multiple values

    // printf("Sum of user input numbers is : %d\n",a+b);

    // year

    printf("Please Enter Year\n");

    int year;

    scanf("%d",&year);

    if(year%4==0){
        printf("%d is Leap Year",year);
    }else{
        printf("%d is not Leap Year",year);
    }


}