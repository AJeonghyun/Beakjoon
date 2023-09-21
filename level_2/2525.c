#include <stdio.h>

int main() {

  int a;
  int b;
  int c;
  int count_hour;
  int count_min;

  scanf("%d %d",&a,&b);
  scanf("%d",&c);

  if((a>=0 && a<=23) && (b>=0 && b <= 59) && (c >= 0 && c <= 1000)) {
    if(b+c >=60) {
      count_hour = (b+c) / 60;
      count_min = (b+c) % 60;
      a = a + count_hour;
      if(a>23) {
        a = a-24;
      }
      b = count_min;
    }
    else {
      if(a>23) {
        a = 0;
      }
      b = b+c;
    }
    printf("%d %d",a,b);
  }
}