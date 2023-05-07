//Given a number N. Print the maltiplication table of the number from 1 to 12
//For example: if N = 1

#include<stdio.h>

int main(){

     int num;
    scanf("%d", &num);

    int mul;
    for(int i=1; i<=12; i++){
        mul=num * i;
        printf("%d * %d = %d\n", num,i,mul);
    }
    
    return 0;
}