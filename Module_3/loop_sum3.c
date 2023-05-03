#include<stdio.h>

int main(){

    int sum=0;
    int num;
    scanf("%d", &num);

    for(int i=0; i<=num; i++){
        sum +=i;
    }

    printf("Sum to %d number is %d\n", num, sum);
    return 0;
}