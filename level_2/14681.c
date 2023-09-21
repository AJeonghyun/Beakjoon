#include <stdio.h>

int main() {
  int x;
  int y;

  scanf("%d",&x);
  scanf("%d",&y);

  if((x>=-1000 && x<=1000 && x!=0) && (y>=-1000 && y<=1000 && y!=0)) {
    if(x>0 && y>0) {
      printf("1");
    }
    if(x<0 && y>0) {
      printf("2");
    }
    if(x<0 && y<0) {
      printf("3");
    }
    if(x>0 && y<0) {
      printf("4");
    }
  }
}