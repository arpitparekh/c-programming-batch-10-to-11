#include<stdio.h>

void main(){

    printf("Enter Number : ");
    int n;
    scanf("%d", &n);
    getchar();                          // sove new line from scanf issue in c

    printf("Enter String : ");
    char name[40];
    gets(name);

}