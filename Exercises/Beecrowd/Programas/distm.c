#include <stdio.h>

int minutos(int x){

  return x * 2;

}

int main (void){

  int a,r;

  scanf("%d", &a);
  r = minutos(a);
  printf("%d minutos\n", r);

  return 0;
  
}
