#include <stdio.h>
#define KML 12

float litros(int horas, int velocidadeMedia){

  int km = horas * velocidadeMedia;

  return (float)km / (float)KML;

}

int main (void)
  
{

  int h, vm;
  float r;

  scanf("%d %d", &h, &vm);
  
  r = litros(h,vm);
  printf("%.3f\n", r);
  
  return 0;
  
}
