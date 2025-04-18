#include <stdio.h>

int produto(int x, int y){

  return x * y;

}

int main(void){

  int num1,num2,r;

  printf("Digite o primeiro inteiro: ");scanf("%d", &num1);
  printf("Digite o segundo inteiro: ");scanf("%d", &num2);

  r = produto(num1, num2);

  printf("PROD = %d\n", r);
  
  return 0;
  
}
