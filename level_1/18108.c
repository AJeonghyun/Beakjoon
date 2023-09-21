#include <stdio.h>
#include <string.h>

int main() {
  int year;
  int bud_year;

  scanf("%d",&bud_year);
  if(bud_year>=1000 && bud_year<=3000) {
    year = bud_year - 543;
  }

  printf("%d",year);


}