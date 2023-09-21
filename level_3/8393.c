#include <stdio.h>

int main() {

  int num;
  int sum=0;
  scanf("%d",&num);
  
  for(int i=0; i<=num; i++) {
    sum=sum+i;
  }
  printf("%d",sum);
}