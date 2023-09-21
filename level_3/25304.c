#include <stdio.h>

int main() {

  long int money;
  int num;
  int sum = 0;

  scanf("%ld",&money);
  scanf("%d",&num);

  int a[num];
  int b[num];
  if(num<=100 && num >=1) {
    for(int i=0; i<num; i++) {
      scanf("%d %d",&a[i],&b[i]);
      if((a[i]<1 && a[i] >=1000000) || (b[i]<1 && b[i]>10)) {
      return 0;
      }
    }
    
    for (int i=0; i<num; i++) {
      sum += a[i] * b[i];
    }

    if(money == sum) {
      printf("Yes");
    }
    else {
      printf("No");
    }
  }



}