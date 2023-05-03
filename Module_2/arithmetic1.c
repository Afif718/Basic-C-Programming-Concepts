#include <stdio.h>

int main(){

    //Aritmetic operations in C (+, -, *, /)

    int num1 = 40;
    int num2 = 20;

    int sum = num1 + num2;

    int sub = num1 - num2;

    int mul = num1 * num2;

    float div = num1*1.0 / num2;
    int mod = num1 % num2;

    
    printf("Sum of Two numbers : %d\n", sum);
    printf("Subtraction of Two numbers: %d\n", sub);
    printf("Multiplication of Two numbers: %d\n", mul);
    printf("Division of Two numbers: %0.2f\n", div);
    printf("Modulo of Two numbers:  %d\n", mod);

    return 0;
}