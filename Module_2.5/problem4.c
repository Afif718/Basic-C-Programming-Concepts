#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

   if(num>0){
       printf("positive\n");
   } else if(num <0){
       printf("Negative\n");
   } else{
       printf("0\n");
   }
    
    return 0;
}