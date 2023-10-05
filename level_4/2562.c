#include <stdio.h>


int main() {

  int numbers [9] = {};

  int max = -100;

  int x = 0;

  for(int i=0; i<9; i++) {
    scanf("%d",&numbers[i]);
  }


  for(int j=0; j<9; j++) {

    if(max < numbers[j]) {
      max = numbers[j];
      x = j;
    }
  }

  printf("%d\n",max);
  printf("%d\n",x+1);
}