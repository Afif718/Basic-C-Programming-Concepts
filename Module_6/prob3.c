//Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

//Note: The "Correct" password is the number 1999.

#include<stdio.h>

int main(){

     int num;
    scanf("%d\n", &num);

    int pass = 1999;

    while(pass!=num){
        printf("Wrong\n");
        scanf("%d\n", &num);
    }

    printf("Correct\n");
    exit(0);
    
    return 0;
}