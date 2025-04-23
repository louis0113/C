#include <stdio.h>


float peri (float x, float y, float z){

  return x + y + z;
}

float areaTra (float b1, float b2, float h){

  return ((b1+b2) * h) / 2;

}

int main (void){

  float a,b,c, p, aT;

  scanf("%f %f %f", &a, &b, &c);
  
  if((a < b + c) && (b < a + c) && (c < a + b)){
     p = peri(a,b,c);
     printf("Perimetro = %.1f\n", p);    
  }else{ 
    aT = areaTra(a,b,c);
    printf("Area = %.1f\n", aT);
  }

}
