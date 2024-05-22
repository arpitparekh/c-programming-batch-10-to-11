#include<stdio.h>

main(){
    
    printf("Marks of Five Subjects\n");

    float s1,s2,s3,s4,s5;

    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5); 

    printf("\nSubjects Marks are these %.0f %.0f %.0f %.0f %.0f\n",s1,s2,s3,s4,s5);

    float total = s1+s2+s3+s4+s5;

    // (total/500)*100

    float percentage = (total/500)*100;

    printf("percentage is %.0f%%",percentage);

    /*
    Percentage >= 90% : Grade A
    Percentage >= 80% : Grade B
    Percentage >= 70% : Grade C
    Percentage >= 60% : Grade D
    Percentage >= 40% : Grade E
    Percentage < 40% : Grade F
    */

    if(percentage>=90){
        printf("\nGrade A\n");
    }else if(percentage>=80 ){
        printf("\nGrade B\n");
    }else if(percentage>=70 ){
        printf("\nGrade C\n");

    }else if(percentage>=60 ){
        printf("\nGrade D\n");

    }else if(percentage>=40 ){
        printf("\nGrade E\n");

    }else{
        printf("\nGrade F\n");
    }
        
}