// Find the Largest Element in an Array
#include<stdio.h>

main(){

    int arr[] = {12,45,33,88,65,34,9,89,54,23};

    int max = arr[0]; //89 

    for(int i=0;i<10;i++){
        // condition

        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("\nMax element in array is %d\n",max);

    int total = 0;

    for(int i=0;i<10;i++){
        // total = total + arr[i];
        total += arr[i];
    }

    printf("\nTotal of all the elements is %d\n",total);


}