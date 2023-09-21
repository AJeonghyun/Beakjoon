#include <stdio.h>

int main() {
  int h;
  int m;

  scanf("%d %d",&h,&m);

  if((h>=0 && h<=23) && (m>=0 && m<=59)) {
    if(m>=45) {
      m=m-45;
      printf("%d %d",h,m);
    }
    else {
      m = 60-(45-m);
      h = h-1;
      if(h<0) {
        h = 23;
      }
      printf("%d %d",h,m);
    }
  }
  
}