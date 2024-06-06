#include<stdio.h>

main(){

    
    // int a = 45  int b = 45  // temp = 12
    // temp = a;
    // a = b;
    // b = temp;

    // sort the array

    // 1 4 6 4 3 6 1 2
    // 1 1 6 4 4 6 3 2

    int arr[] = {12,35,56,7854,23,56,6734,456,8,5,12,7,9};  // insertion sort

     printf("\nBefore Sorting\n");

    for(int i=0;i<13;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<13;i++){   // 0

       for(int j=i+1;j<13;j++){ // 34 ..9

           if(arr[i]>arr[j]){
                int temp = arr[i]; // 12
                arr[i] = arr[j];
                arr[j] = temp;
           }
       }
    }   
    printf("\nAfter Sorting\n");

    for(int i=0;i<13;i++){
        printf("%d ",arr[i]);
    }

}