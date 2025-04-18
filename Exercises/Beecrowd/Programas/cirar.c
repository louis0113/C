#include <stdio.h>
#include <math.h>
#define PI 3.14159

double areaC (double raio){

  return PI * pow(raio,2);
}


int main (void){

  double valor, resultado;

  printf("Digite o raio do círculo: ");scanf("%lf", &valor);

  resultado = areaC(valor);

  printf("A = %.4lf\n", resultado);

  return 0;
  
}
