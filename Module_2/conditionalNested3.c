#include <stdio.h>

int main(){

    int rm; 

    scanf("%d", &rm);

    if(rm>=2000){
        printf("Can go to Singapore\n");

        if(rm >= 4000){
            printf("Can also go to Thailand\n");
        }else{
            printf("Thailand not possible\n");
        }
    } else{
        printf("Save some money for future traveling\n");
    }

 
    return 0;
}