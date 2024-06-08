#include<stdio.h>
#include<string.h>

main(){

    // string

    // 12  12.34 'c'

    // maulik
    // string is a group of character

    // char name[] = {'m','a','u','l','i','k'};
    char name1[] = "maulik";

    printf("%s\n",name1);

    printf("Enter String\n");
    char data[10];

    // scanf("%s",&data);  // not efficient

    gets(data);

    printf("user enttered string is %s\n",data);
    puts(data);

    for(int i=0;i<10;i++){
        printf("%c ",data[i]);
    }
}