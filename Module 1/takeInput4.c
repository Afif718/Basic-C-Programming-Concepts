#include<stdio.h>
int main(){


    //variable declaration
    int age, salary;
    char d;
    float num;
    
    //to take input we need to use scanf function
    //%d is the format specifier
    scanf("%d %d %c %f", &age, &salary, &d, &num);

    //print the input below
    printf("%d %d %c %0.2f", age, salary, d, num);
    return 0;
}