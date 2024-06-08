#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>

main(){

    // printf()
    // scanf()

    printf("sqrt function %.2lf\n",sqrt(90));
    printf("cbrt function %.2lf\n",cbrt(8));
    printf("exp function %.2lf\n",exp(3));
    printf("log10 function %.2lf\n",log10(10));
    printf("log function %.2lf\n",log(10));
    printf("fabs function %.2lf\n",fabs(10));
    printf("ceil function %.2lf\n",ceil(10.1));
    printf("floor function %.2lf\n",floor(10.9));
    printf("pow function %.2lf\n",pow(2,4));
    printf("sin function %.2lf\n",sin(30));
    printf("cos function %.2lf\n",cos(60));
    printf("tan function %.2lf\n",tan(30));

    printf("abs function %d\n",abs(-2));
    
    // for(int i=1;i<=10;i++){
    //     printf("%d ",i);
    //     if(i==5){
    //         exit(0);
    //     }
    // }

    printf("%d\n ",rand());

    // MessageBox(NULL, "Hello, World!", "My First Message Box", MB_OK);

    
}