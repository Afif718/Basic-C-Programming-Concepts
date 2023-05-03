#include <stdio.h>

int main(){

    int age; 

    scanf("%d", &age);

    if(age == 18){
        printf("Congratulations on your first drive\n");
    } else if(age > 18 && age <=65){
        printf("You are allowed to drive\n");
    }
    else if(age >= 66){
        printf("You are too old to drive\n");
    } else{
        printf("You are under-aged. You are not allowed to drive\n");
    }
 
    return 0;
}