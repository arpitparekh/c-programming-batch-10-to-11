#include<stdio.h>

void sortArray(int arr[],int size){

    for (int i = 0; i < size;i++){
        for (int j = i + 1; j < size;j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main(){

    int arr[] = {1, 5, 8, 6, 3, 6, 9, 6, 3};

    int lengthofArray = sizeof(arr) / sizeof(int);

    printf("\n%d is the length\n", lengthofArray);

    sortArray(arr, lengthofArray);

    // sizeof()
    
}