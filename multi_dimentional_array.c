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

    // printf("%d",arr1[1][0]);

    printf("Enter the size of array\n");
    int m,n;
    scanf("%d%d",&m,&n);

    int val[m][n];
    int val2[m][n];
    int val3[m][n];

    printf("Enter values in first array\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] => ",i,j);
            scanf("%d",&val[i][j]);
        }
    }

    printf("Enter values in second array\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] => ",i,j);
            scanf("%d",&val2[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           val3[i][j] = val[i][j]+val2[i][j];
        }
    }

    printf("Sum of 2 matrix is \n");  //sum of matrix

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",val3[i][j]);
        }
        printf("\n");
    }
    

}