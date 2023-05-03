// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD". Only one line containing a number X (999 < X  ≤  9999)

#include<stdio.h>

int main(){

     int num1;
    scanf("%d", &num1);

    //if you divide 4 digit number using 1000 you will get the first number only. For that use integer data type to ignore the decimal numbers. For 3 use 100, for 2 use 20
    int getFirstDigit = num1/1000;

    if(getFirstDigit%2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }

    
    
    return 0;
}