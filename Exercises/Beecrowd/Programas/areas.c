#include <stdio.h>
#include <math.h>
#define PI 3.14159

float areaTriangulo(float x, float y){

  return (x * y) / 2; 

}

float areaCirculo(float raio){

  return PI * pow(raio,2);

}

float areaTrapezio(float b1, float b2, float h){

  return ((b1 + b2) * h) / 2;

}

float areaQuadrado(float lado){

  return pow(lado,2);
  
}

float areaRetangulo(float x, float y){


  return x * y;
  
}


int main (void){
  int x;
  float a,b,c;
  scanf("%f %f %f", &a, &b , &c);
  float tri = areaTriangulo(a,c), cir = areaCirculo(c), tra = areaTrapezio(a,b,c), qua = areaQuadrado(b), ret = areaRetangulo(a,b); 

  float valores[5] = {tri, cir, tra, qua, ret};
  char names[5][20] = {"TRIANGULO", "CIRCULO", "TRAPEZIO", "QUADRADO", "RETANGULO"};

  for(x = 0; x < 5; x++){
    printf("%s: %.3f\n", names[x], valores[x]);
  }
 
  return 0;

}
