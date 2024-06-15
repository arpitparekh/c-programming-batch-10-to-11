#include <stdio.h>

#define PI 3.14  // global constant

int a = 12; // global variable

void display()
{ // no parameter  // no return type  // function declaration
    printf("This is display function\n");
}

void displayNumber(float i)
{ // with paramter // no return
    printf("values passed in function is %f\n", i);
}

void sum(int a, int b)
{
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

void checkNoOfDigit(int num1, int num2) // no return type with parameter
{

    // 1223 / 10 = 122
    // 122 / 10 = 12
    // 12 / 10 = 1
    // 1 / 10 = 0

    int count1 = 0;
    int count2 = 0;

    while (num1 != 0)
    { // 1223
        num1 = num1 / 10;
        count1++;
    }

    while (num2 != 0)
    {
        num2 = num2 / 10;
        count2++;
    }

    if (count1 == count2)
    {
        printf("Both numbers have same number of digits\n");
    }
    else
    {
        printf("Both numbers have different number of digits\n");
    }
}

int myFunction()
{
    return 12;
}

float division(float a, float b)
{
    printf("hello => ");
    return a / b;
}

void main()
{

    int a = 45;  // local vaiable

    // functions
    // block of code that runs when we called it

    // function name
    // flucntion block
    // function parameters
    // function return type

    display(); // function calling
    display(); // function calling
    display(); // function calling
    display(); // function calling
    display(); // function calling

    // code reuse

    displayNumber(12.2);
    displayNumber(22.2);
    displayNumber(32.2);
    displayNumber(42.2);

    sum(12, 13);
    sum(10, 20);
    sum(99, 98);
    sum(55, 55);

    checkNoOfDigit(1224, 6665);
    checkNoOfDigit(14, 665);
    checkNoOfDigit(122, 996665);

    // int c = myFunction();
    printf("value form function is %d\n", myFunction());

    printf("Division is %f\n", division(1.2, 2.3));

    float f = 12.13;

    float k = f * division(1.2, 2.3); // fucntion as value

    printf("value is %f", k);
}