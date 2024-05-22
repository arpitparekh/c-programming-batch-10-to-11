#include<stdio.h>

main(){

    // Write a program to check whether a character is in the alphabet or not.

    printf("Enter Character\n");  // '.'

    char ch;

    scanf("%c",&ch);

    if((ch<='z' && ch>='a') || (ch<='Z' && ch>='A')){
        printf("\n%c is alphabet\n",ch);
    }else if(ch<='9' && ch>='0'){
        printf("\n%c is number\n",ch);
    }else{
        printf("\n%c is symbols\n",ch);
    }

    // a e i o u

    // hello
}