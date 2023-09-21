#include <stdio.h>

int main() {

  int num;
  int count;
  scanf("%d",&num);


  count = num / 4;

  for(int i=0; i<count; i++) {
    printf("long ");
  }
  printf("int");
}