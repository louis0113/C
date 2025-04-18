#include <stdio.h>
#define PESOA 3.5
#define PESOB 7.5


float media(float a, float b){

  float prod1, prod2, media;
  const float soma = PESOA + PESOB;
  prod1 = a * PESOA; prod2 = b * PESOB;
  media = (prod1 + prod2) / soma;
  
  return media;
 

}



int main (void){

  float x,y,r;

  printf("Digite a 1º nota: ");scanf("%f", &x);
  printf("Digite a 2º nota: ");scanf("%f", &y);

  r = media(x,y);

  printf("MEDIA = %.5f\n", r);
  
  return 0;
  
}
