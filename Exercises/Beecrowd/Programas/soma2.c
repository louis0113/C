#include <stdio.h>

int soma(int a, int b){


  return a+b;

}

int main (void){

  int v1,v2,r;

  
  printf("Digite o primeiro valor: ");scanf("%d", &v1);
  printf("DIgite o segundo valor: ");scanf("%d", &v2);

  r = soma(v1,v2);

  printf("A soma de %d + %d = %d\n",v1,v2,r);
  
  return 0;
}
