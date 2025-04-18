#include <stdio.h>

float consumo (int x, float y) {

  return x / y;

}

int main (void) {
  int km;
  float lit,r;

  scanf("%d %f", &km, &lit);
  

  r = consumo(km, lit);

  printf("%.3f km/l\n", r);
  return 0;

}
