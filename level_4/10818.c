#include <stdio.h>

int main() {
  int x = 0;
  long int num[10000000] = {};


  scanf("%d",&x);

  for (int i=0; i<x; i++) {
    scanf("%ld",&num[i]);
  }

  // 최대, 최소 구하기
    int max = -1000000;

    int min = 1000000;

  for(int j=0; j<x; j++) {
    if(max < num[j])
      max = num[j];
    
    if(min > num[j])
      min = num[j];
  }
  printf("%d %d",min,max);
}