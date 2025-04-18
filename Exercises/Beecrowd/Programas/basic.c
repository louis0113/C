#include <stdio.h>

int soma(int a, int b){

  return a + b;

}

int main (void){

  int v1,v2;
  
  printf("Digite o 1º valor: ");scanf("%d", &v1);
  printf("Digite o 2º valor: ");scanf("%d", &v2);

  int resultado = soma(v1,v2);

  printf("X = %d\n", resultado);

  return 0;
}
