//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include<stdio.h>

int main(){

     char Ch;
    scanf("%c", &Ch);

    int ascii_code = (int) Ch;

    if(ascii_code>=65 && ascii_code<=90){
        int smallCh = ascii_code + 32;
         char letter = (char) smallCh;
         printf("%c\n", letter);
    } else if(ascii_code>=97 && ascii_code<=122){
        int CapitalCh = ascii_code - 32;
          char letter = (char) CapitalCh;
          printf("%c\n", letter);
    }

    //printf("The letter is %c and it's value is %d\n", Ch, ascii_code);
    
    return 0;
}