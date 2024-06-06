#include<stdio.h>

main(){

    int arr[] = {1,2,3,6,8,65,4,6,8};

    int arr1[3][2]={{1,2},{3,4},{5,6}};   // 2 dimentional array // metrix

    for(int i=0;i<3;i++){  // 0 // 1 // 2
        for(int j=0;j<2;j++){  // 0 // 1
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("%d",arr1[1][0]);


}