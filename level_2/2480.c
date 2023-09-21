#include <stdio.h>

int main() {

  int num1;
  int num2;
  int num3;
  int big;

  scanf("%d %d %d",&num1,&num2,&num3);

  if((num1!=num2) && (num2!=num3) && (num1!=num3)){
    if(num1 > num2 && num1 > num3)
      big = num1;
    else if((num2 > num1)&& (num2 > num3)) {
      big = num2;
    }
    else {
      big = num3;
    }
    printf("%d",big*100);
  }

  if(((num1 == num2) && (num1!=num3))) {
    printf("%d",1000+(num1)*100);
  }

  if(((num2 == num3) && (num1 != num2))) {
    printf("%d",1000+(num2)*100);
  }

  if(((num1 == num3) && (num1 != num2))) {
    printf("%d",1000+(num3)*100);
  }

  if((num1==num2) && (num2 == num3)) {
    printf("%d",10000+(num1)*1000);
  }
}