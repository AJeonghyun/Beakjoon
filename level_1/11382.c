#include <stdio.h>
#include <string.h>

int main() {
  long int number1;
  long int number2;
  long int number3;
  long int sum;

  scanf("%ld %ld %ld",&number1,&number2,&number3);
  sum = number1 + number2 + number3;
  printf("%ld",sum);
}