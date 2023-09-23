#include <stdio.h>

int main() {

  int n = 0;
  int x = 0;
  int num[10000];
  int a = 0;


scanf("%d %d",&n, &x);

if(n>=1 && x<=10000){
  for(int i=0; i<n; i++) {
    scanf("%d",&num[i]);
  }

for(a=0; a<n; a++) {
  if(num[a] < x)
  printf("%d ",num[a]);
}
}
}