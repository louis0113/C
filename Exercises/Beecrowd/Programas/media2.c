#include <stdio.h>
#define PESOA 2
#define PESOB 3
#define PESOC 5

double media(double x, double y, double z){

  const double somaPesos = PESOA + PESOB + PESOC;
  double ProdA, ProdB, ProdC, media;
  ProdA = x * PESOA ;ProdB = y * PESOB; ProdC = z * PESOC;
  media = (ProdA + ProdB + ProdC) / somaPesos;

  return media;
  
}

int main (void){

  double v1,v2,v3, resultado;

  printf("Digite a 1º nota: ");scanf("%lf", &v1);
  printf("Digite a 2º nota: ");scanf("%lf", &v2);
  printf("Digite a 3º nota: ");scanf("%lf", &v3);

  resultado = media(v1,v2,v3);

  printf("MEDIA = %.1lf\n", resultado);
  


  return 0;
  
}
