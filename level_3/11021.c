#include <stdio.h>

int main() {

  int a=0;
  int b=0;
  int count = 0;

  scanf("%d",&count);
    
  for(int i=0; i<count; i++) {
    scanf("%d %d",&a,&b);

    printf("Case #%d: %d\n",i+1,a+b);
  }
}