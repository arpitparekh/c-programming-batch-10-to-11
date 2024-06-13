#include <stdio.h>

display()
{ // no parameter  // no return type  // function declaration
    printf("This is display function\n");
}

displayNumber(float i)
{ // with paramter // no return
    printf("values passed in function is %f\n", i);
}

sum(int a, int b)
{
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

// 1213 / 10 = 121

checkNoOfDigit(int num1, int num2) // no return type with parameter
{

    // 1223 / 10 = 122
    // 122 / 10 = 12
    // 12 / 10 = 1
    // 1 /10 = 0

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

int main()
{

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

    return 0;
}