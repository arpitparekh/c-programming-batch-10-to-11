#include<stdio.h>

main(){

    for(int i=1;i<=5;i++){

        for(int k=5;k>=i;k--){ // 5 space
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            if(i!=1 && i!=2 ){
                printf(" *");
            }else{
                 printf("  ");
            }
        }
    
        for(int k=5;k>=(i*2)-4;k--){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            if(i!=1 && i!=2 ){
                printf(" *");
            }else{
                 printf("  ");
            }
        }

        printf("\n");
    }


    for(int i=1;i<=9;i++){

        for(int k=0;k<=i;k++){
            printf(" ");
        }

        for(int j=9;j>=i;j--){

            if(i==4 && j==5){  
                printf(" u");
            }else if(i==4 && j==6){
                printf(" t");
            }else if(i==4 && j==7){ 
                printf(" k");
            }else if(i==4 && j==8){ 
                printf(" e");
            }
            else{
                printf(" *");
            }

            
        }
        
        printf("\n");
    }

     printf("\n");

}