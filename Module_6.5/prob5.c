//A number of two digits is lucky if one of its digits is divisible by the other. For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

//Given a number between 10 and 99, determine whether it is lucky or not.

// Print "YES" if the given number is lucky, otherwise print "NO".

#include<stdio.h>

int main(){

     int num;
    scanf("%d", &num);

    //get the last value
    int num1 = num%10;
    //get the first value
    int num2 = num/10;

    if(num1 % num2 == 0 || num2 % num1 == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}