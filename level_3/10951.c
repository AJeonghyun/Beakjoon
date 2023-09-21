#include <stdio.h>

int main() {

  int a = 0;
  int b = 0;

  while(1) {
/*
에러가 발생하면 scanf는 -1을 출력, 정상적으로 작동하면 2를 출력
scanf는 성공적으로 입력받은 문자를 return하는데,
에러가 있거나 파일의 끝을 만났을 때 (EOF일때) -1을 리턴한다.
canf로 a,b 모두를 성공적으로 받을 때는 2를 return한다.
*/
    if(scanf("%d %d", &a, &b) == -1) {break;}
    printf("%d\n",a+b);
  }
  return 0;
}