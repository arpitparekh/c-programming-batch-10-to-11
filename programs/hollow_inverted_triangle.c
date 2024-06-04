/*
    3 3 3 3 3 3 3 3 3
      3           3 
        3       3      
          3   3
            3

            1  9
            2  7
            3  5
            4  3
            5  1
*/

#include<stdio.h>

main(){

    int n;
    printf("No of Rows\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){  // 9 7 5 3 1 

        for(int k=2; k<=i; k++){  // space
            printf(" ");
        } 

        for(int j = 1;j <= (2*n-1)-(2*i) ;j++){  // 10 >= 2  // 9 >=3  // 8>=5  // * mate

            if(i==1 || j==1 || j== (2*n-1)-(2*i) ){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");

    }

}