#include<stdio.h>

main(){

    /*
        1 2 3     00 01 02
        1 2 3     10 11 12
        1 2 3     20 21 22
    */

    int sum = 0;

    int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){                           // logic
                sum = sum + arr[i][j];
            }
        }
    }

    printf("Sum is %d",sum);
    
}