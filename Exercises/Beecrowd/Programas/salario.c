#include <stdio.h>
float salario (float valor, int hora){

  return (float)hora * valor;
  
}

int main (void){

  int numFunc, horinha;
  float valor;

  scanf("%d", &numFunc);
  scanf("%d", &horinha);
  scanf("%f", &valor);
  
  float resultado = salario(valor, horinha);
  
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", numFunc, resultado);
  return 0;

}
