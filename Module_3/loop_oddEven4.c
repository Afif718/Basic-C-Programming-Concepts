#include<stdio.h>

int main(){

    for(int i=1; i<=5; i++){

        if(i%2!=0){
            printf("%d is Odd\n", i);
        }else{
            printf("%d is Even\n", i);
        }
    }
    return 0;
}