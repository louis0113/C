#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){

  int absValue = abs(x - y);
  return (x + y + absValue) / 2;

}


int main (void){
  int a,b,c,resultado;

  scanf("%d %d %d ", &a, &b, &c);
  resultado = maior(maior(a,b),c);
 

  printf("%d eh o maior\n", resultado);
  
  return 0;

}
