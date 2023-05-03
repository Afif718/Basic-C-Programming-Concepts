#include<stdio.h>

int main(){

    for(int i=1; i<=10; i++){

        //loop will skip 5 
        if(i==5){
            continue;
        }
        
        printf("%d\n",i);

        //if continue was placed after printf, it would not work
        // if(i==5){
        //     continue;
        // }
    }
    return 0;
}