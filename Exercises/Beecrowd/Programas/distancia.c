#include <stdio.h>
#include <math.h>

float quadrado(float x, float y){

  return pow((x -y), 2);

}

float raiz (float a, float b){

  return sqrt((a + b));
  
}


int main (void) {

  float x1,x2,y1,y2,r1,r2,resultado;

  scanf("%f %f", &x1, &y1);
  scanf("%f %f", &x2, &y2);

  r1 = quadrado(x2,x1);r2 = quadrado(y2, y1);
  resultado = raiz(r1,r2);

  printf("%.4f\n", resultado);
  
  
  return 0;

}
