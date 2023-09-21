#include <stdio.h>

int main(void) 
{
  int num1;
  int num2;
  int first;
  int middle;
  int last;
  int answer;
  scanf("%d\n",&num1);
  scanf("%d",&num2);
  last = num2%100%10*num1;
  middle = num2%100/10*num1;
  first = num2/100*num1;
  answer = last+middle*10+first*100;
  printf("%d\n",last);
  printf("%d\n",middle);
  printf("%d\n",first);
  printf("%d\n",answer);
  return 0;
}