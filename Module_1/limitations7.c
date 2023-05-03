#include<stdio.h>
int main(){

    //integer can take input upto -10^9 to 10^9
    int a = 1000000000;

    //if we want longer integer than the above then we have to use long long int
    //it can take up to -10^18 to 10^18
    long long int b = 1234567890111213;
    

    printf("Integer value %d\n", a);
    printf("Long long integer value %lld\n", b);

    //float 
    float f = 34.5;

    //when we have a big float number we need to use doublee
    double df = 2005.12345678999;

    printf("Float %0.2f\n", f);
    printf("Float %0.15lf\n", df);

    return 0;
}