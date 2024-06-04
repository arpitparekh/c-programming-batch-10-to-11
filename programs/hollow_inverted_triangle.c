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


    for(int i=1; i<=5; i++){  // 9 7 5 3 1 

        for(int k=2; k<=i; k++){
            printf(" ");
        } 

        for(int j = 1;j<=11-(2*i);j++){  // 10 >= 2  // 9 >=3  // 8>=5
            if(i==1 || j==1 || j==11-(2*i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        
        printf("\n");

    }

}