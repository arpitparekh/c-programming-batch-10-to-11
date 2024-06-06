#include<stdio.h>

main(){

    // number is palindrome or not

    // 12321  // 121 // 12343221 // 4554

    printf("Enter Number\n");

    int n;
    scanf("%d",&n);  // 121 // 4546
    int old = n;

    // mod

    // 121 % 10 = 1
    // 123 % 10 = 3  // gives us last digit

    // 121 / 10 = 12
    // 123 / 10 = 12  // remove the last digit

    // find no of digits in number

    // 1234 / 10 = 123
    // 123 / 10 = 12
    // 12 / 10 = 1
    // 1 / 10 = 0

    // int count = 0;

    // while(n!=0){  // 1234  // 123 // 12// 1
    //     n = n/10;  // 123 // 12 // 1 / 0
    //     count++;
    // }

    // printf("\nNo of digit in %d is %d",old,count);

    int rev = 0; // 4321

    while(n!=0){   // 1234
        int last_digit = n % 10;   // 4 // 3  // 2  // 1
        rev = rev*10 + last_digit;                                 // logic
        n = n/10; // 123 // 12  // 1
    }

    if(rev==old){ 
        printf("\nNumber is Plaindrome\n");
    }else{
        printf("\nNumber is not  Plaindrome\n");
    }

}