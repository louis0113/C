#include <stdio.h>
#include <math.h>
#define PI 3.14159

double areaEsfera(double raio){

  return (4.0/3.0) * PI * pow(raio,3); 
}

int main (void){
  double r, resultado;
  scanf("%lf", &r);fflush(stdin);
  resultado = areaEsfera(r);
  printf("VOLUME = %.3lf\n", resultado);

  return 0;
}
