#include <stdio.h>

int main() {

  int num[1000];

  int a = 0;


  scanf("%d",&a);

  for(int i=0; i<a; i++) {
    scanf("%d ",&num[i]);
  }
  int find = 0;

  scanf("%d",&find);

  int count = 0;


  for(int i=0; i<a; i++) {
    if(find == num[i]) count++;
  }

  printf("%d\n",count);

}