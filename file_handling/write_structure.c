#include<stdio.h>

struct Student{
    char name[50];
    int id;
    float gpa;
} s1, s2;

void main(){

    printf("Enter First Student Data : \n");
    printf("Enter Student Name : ");
    fgets(s1.name, 50, stdin);
    printf("Enter Student ID : ");
    scanf("%d", &s1.id);
    getchar();
    printf("Enter Student GPA : ");
    scanf("%f", &s1.gpa);
    getchar();

    printf("Enter Second Student Data : \n");
    printf("Enter Student Name : ");
    fgets(s2.name, 50, stdin);
    printf("Enter Student ID : ");
    scanf("%d", &s2.id);
    getchar();
    printf("Enter Student GPA : ");
    scanf("%f", &s2.gpa);
    getchar();

    FILE *ptr;

    ptr = fopen("/home/arpit-parekh/c_files/c_write.txt", "w");
    if(ptr == NULL){
        printf("File Not Found\n");
    }else{
        printf("File Found\n");

        fprintf(ptr, "Student 1 Data : \n");
        fprintf(ptr, "Name : %s", s1.name);
        fprintf(ptr, "ID : %d\n", s1.id);
        fprintf(ptr, "GPA : %.2f\n", s1.gpa);
        fprintf(ptr, "\n");
        fprintf(ptr, "Student 2 Data : \n");
        fprintf(ptr, "Name : %s", s2.name);
        fprintf(ptr, "ID : %d\n", s2.id);
        fprintf(ptr, "GPA : %.2f\n", s2.gpa);

        printf("Find Write Successfullyy");

        fclose(ptr);

    }

}
