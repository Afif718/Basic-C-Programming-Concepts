//Given a number N, and N numbers, find maximum number in these N numbers.

#include<stdio.h>

int main(){

     int num;
    int inputNum;
    int maxNum=0;
    
    scanf("%d", &num);

    if(num<=1000){

        for(int i=1; i<=num; i++){

            scanf("%d",&inputNum);
            //printf("%d", inputNum);

            if(inputNum>maxNum){
                maxNum = inputNum;
            }
        }

        printf("%d\n",maxNum);
    } else{
        printf("Input should not be more than 1000\n");
    }
    
    return 0;
}