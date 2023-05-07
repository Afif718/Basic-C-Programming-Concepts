//Given a number N. Print the digits of that number from right to left separated by space.

// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 109)

#include<stdio.h>

int main(){

     int num;
    scanf("%d", &num);

    int inputNum;
    
     if(num<=10){

         for(int i=1; i<=num; i++){
             scanf("%d", &inputNum);

             //main part
            do{
                //get the last value 
                 printf("%d ", inputNum%10);
                //iterate untill it becomes 0
                 inputNum = inputNum /10;
            } while(inputNum != 0);
             printf("\n");
    }
         
     }

    
    return 0;
}