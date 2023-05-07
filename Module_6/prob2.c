//Given N numbers. Count how many of these values are even, odd, positive and negative.
#include<stdio.h>

int main(){

     int num;
    scanf("%d", &num);

    int evCount=0;
    int oddCount=0;
    int positiveNum=0;
    int negativeNum=0;
    
    int input;

    if(num<=1000){
        for(int i=1; i<=num; i++){
        
        scanf("%d", &input);

        if(input%2==0){
            //printf("Even Number %d\n", evCount);
            evCount++;
            if(input>0){
                positiveNum++;
            } else if(input<0){
                negativeNum++;
            }
            
        } else if(input%2!=0){
            //printf("Odd Number %d", oddCount);
            oddCount++;
            if(input>0){
                positiveNum++;
            } else if(input<0){
                negativeNum++;
            }
        }
    }
        printf("Even: %d\n", evCount);
        printf("Odd: %d\n", oddCount);
        printf("Positive: %d\n", positiveNum);
        printf("Negative: %d\n", negativeNum);
        
    } else{
        printf("Input cannot be more than 1000\n");
    }
    
    

        
    
    return 0;
}