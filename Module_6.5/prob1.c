//Given a lowercase alphabet character. You have to print the next character in the alphabet.
//Note The next letter to z is a.

#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    int charValue = (int) ch;
    int nextValue=0;

    if(charValue >=97 && charValue <=122){
       if(charValue == 122){
        charValue = 97;
        printf("%c\n",charValue);
        } else{
            nextValue = charValue +1;
            printf("%c\n",nextValue);
        }
    }else{
        printf("Character should be inbetween a-z\n");
    }

    return 0;
}