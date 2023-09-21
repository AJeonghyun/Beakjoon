#include <stdio.h>
#include <string.h>

int main(void) 
{
  char id[20];
  char a[] = "\?\?!";
  scanf("%s", id);
  strcat(id,a);
  printf("%s",id);
  return 0;
}