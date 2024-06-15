#include <stdio.h>


void printArray(int* p,int size){
    for(int i = 0; i < size; i++,p++){
        printf("%d ", *p);
    }
}

void main()
{

    // pointers
    // pointers point to the locaion
    // pointers hold the address of the variable
    // pointers are used to access the value stored at that location

    int a = 12;

    int *p = &a;

    printf("\n%p", p);
    printf("\n%d", *p);
    printf("\n%p", &p);
    printf("\n%p", &a);

    int* p1 = &p;

    printf("\n%p", p1);
    printf("\n%p",&p1);

    printf("\n[%p] => %d", p, a);
    printf("\n[%p] => %p", p1, p);

    // print array using pointer

    int arr[] = {1, 5, 2, 7, 4, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = &arr[0];

    printArray(ptr,n);

    // for (int i = 0; i < n; i++)
    // {

    //     printf("\n[%p]=> %d", ptr,*ptr);
    //     ptr++;
    // }
}