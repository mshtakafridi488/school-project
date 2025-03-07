#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 = rand();
  int num2 = rand();
  int result;

  if (num1 > num2) {
    result = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, result);
  } else {
    result = num2 - num1;
    printf("The difference of %d and %d is %d\n", num1, num2, result);
  }

  return 0;
}
