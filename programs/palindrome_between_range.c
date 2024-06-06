#include<stdio.h>

main(){

    for(int i=1;i<=100000;i++){  

    int old = i;  // 23

    int rev = 0; // 4321

    while(i!=0){   // 1234
        int last_digit = i % 10;   // 4 // 3  // 2  // 1
        rev = rev*10 + last_digit;                                 // logic
        i = i/10; // 123 // 12  // 1
    }

    if(rev==old){ 
        printf("%d\n",old);
    }

    i = old;

}

}