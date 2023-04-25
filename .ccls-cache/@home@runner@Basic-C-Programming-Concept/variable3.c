#include <stdbool.h>
#include <stdio.h>

int main() {

  // integer
  int a = 25;
  int c = 25;

  int sum = a + c;

  // float
  float b = 5.43;

  // charater
  char A = 'X';

  // boolean
  bool t = true;

  printf("Print Integer using %%d\n");
  printf("Sum of two numbers is: %d", sum);
  printf("\n");

  // to print float value use %f
  // to specify how many digits we want to show use %0.numOFDigits-f
  // Example: %0.3f -> 0.111digits
  printf("Print Float value---> ");
  printf("%0.3f", b);
  printf("\n");

  // to print a char use %c
  printf("This is a char ---> %c", A);
  printf("\n");

  char name[] = "This is a string";
  printf("%s", name);

  return 0;
}