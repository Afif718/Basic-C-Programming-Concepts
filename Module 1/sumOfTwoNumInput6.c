#include<stdio.h>
int main(){

    //example to take two input numbers and sum it up
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2; 

    printf("Sum of two numbers is : %d\n", sum);
    

    return 0;
}