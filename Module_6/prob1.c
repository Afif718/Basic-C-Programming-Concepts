//Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
//If there are no even numbers print -1.
#include<stdio.h>

int main(){

     int num;
    scanf("%d", &num);

    if(num==1){
        printf("%d\n",-1);
    }else{
          for(int i=1; i<=num; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
  
    }
    
    return 0;
}