#include<stdio.h>

int main(){

    int array[5] = {1,2,3,4,5};

    int sum = 0;
    
    for(int i=0; i<5; i++){
        sum += array[i];
    }
    printf("Sum of the array is %d\n", sum);

    return 0;
}