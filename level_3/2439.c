#include <stdio.h>

int main() {
  int num = 0;

  scanf("%d",&num);
  for(int j=1; j<=num; j++) {
    for(int k=0; k<num-j; k++) {
      printf(" ");
    }
    for(int i=0; i<j; i++) {
    printf("*");
  }
  printf("\n");
  }
  

}