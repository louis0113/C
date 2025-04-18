#include <stdio.h>

int diff (int a, int b , int c, int d){

  return (a * b - c * d);
}

int main (void){

  int n1,n2,n3,n4,r;
  
  scanf("%d %d %d %d", &n1, &n2n &n3, &n4);
  
  r = diff(n1,n2,n3,n4);

  printf("DIFERENCA = %d\n", r);
  return 0;

}
