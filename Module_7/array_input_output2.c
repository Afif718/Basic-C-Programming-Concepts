#include<stdio.h>

int main(){

    //declare an array
    int arr[5];

    //take input
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n");

    //print the array
    printf("Array output\n");
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}