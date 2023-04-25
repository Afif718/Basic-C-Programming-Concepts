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
  char A = 'a';

  // boolean
  bool t = true;
  printf("Print Integer using %%d\n");
  printf("Sum of two numbers is: %d", sum);
  printf("\n");

  // to print float value use %f
  // to specify how many digits we want to show use %0.numOFDigits-f
  // Example: %0.3f -> 0.111digits
  printf("Print Float value\n");
  printf("%0.3f", b);

  char name[] = "This is a string";
  printf("%s", name);

  return 0;
}