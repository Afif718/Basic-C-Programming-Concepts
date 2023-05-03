//Given 3 numbers A, B and C, Print the minimum and the maximum numbers

#include<stdio.h>

int main(){

     int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    //3 2 1 X Y Z
    if(num1 >= num2 && num1 >= num3){
        //printf("%d ", num1);
        //num1 max 3
        //Y Z
        if(num2==num3){
            printf("%d ", num2);
            printf("%d", num1);
        }else if(num2<num3){
            printf("%d ", num2);
            printf("%d", num1);
        } else{
            printf("%d ", num3);
            printf("%d", num1);
        }
    
    } else if(num2 >= num1 &&num2 >= num3){
        //printf(" %d ", num2);
        //num2 is max here 
        // num1 and num3 left
        if(num1 == num3){
            printf("%d ", num1);
            printf("%d", num2);
        } else if(num1<num3){
            printf("%d ", num1);
            printf("%d", num2);
        }else{
            printf("%d ", num3);
            printf("%d", num2);
        }
    } else if(num3 >= num1 && num3 >= num2){
        //printf("%d", num3);
        //num3 here is max
        //num1 and num2 left
        if(num1 == num2){
            printf("%d ", num1);
            printf("%d", num3);
        }else if(num1<num2){
            printf("%d ", num1);
            printf("%d", num3);
        }else{
            printf("%d ", num2);
            printf("%d", num3);
        }
    } else if(num1 == num2 && num2== num3){
        //print num1
        //num2 and num3
        printf("%d ", num1);
        printf("%d", num2);
    }
    
    return 0;
}