//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc

#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    int ascii_value = (int) ch;

    if(ascii_value >= 48 && ascii_value <=57){
        printf("IS DIGIT\n");
    } else if(ascii_value >= 65 && ascii_value <=90){
         printf("ALPHA\n");
         printf("IS CAPITAL\n");
    }else if(ascii_value >= 97 && ascii_value <=122){
         printf("ALPHA\n");
         printf("IS SMALL\n");
    }

    //printf("%c %d\n", ch, ascii_value);

    return 0;
}