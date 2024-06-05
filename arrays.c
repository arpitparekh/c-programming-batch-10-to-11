#include<stdio.h>

main(){

    // array  // is group of values of simiar datatype   / one dimentinal array
    // array is fixed size

    // int // declaration of array

    int jimit[]  = {1 ,45 ,78 ,23 ,78 ,99 ,23};  
             //     0   1   2   3   4   5   6 

    float arr2[] = { 12.34 , 45.67 , 34.55 , 88.67 , 88.2 };

    char arr3[] = {'a' , 'b' , '$' , ' '};

    int arr[7];

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("%d \n",jimit[6]);

    printf("----------------\n");

    printf("Index  Values \n");

    for(int i=0;i<7;i++){            // loop is used to print array
        printf(" [%d] => %d \n",i,jimit[i]);
    }

    printf("----------------\n");

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Enter the size of array\n");

    int size;

    scanf("%d",&size);

    int values[size];  // 5  int values[5];


    for(int i=0;i<size;i++){  // 0 // 1
        scanf("%d",&values[i]);
    }

    printf("----------------\n");

    printf("Index  Values \n");

    for(int i=0;i<size;i++){            // loop is used to print array
        printf(" [%d] => %d \n",i,values[i]);
    }

    printf("----------------\n");

    int arr5[][]={{1,2},{1,3},{4,5},{7,8}};
    
}