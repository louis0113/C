#include <stdio.h>
#define MSG "Total: R$ "
int main (void){
  
  float cq = 4.00,xs = 4.50,xb = 5.00,tr = 2.00,r = 1.50, total;
  int op, quant;

  scanf("%d %d", &op, &quant);
  
  switch(op){
  case 1:
    total = cq * quant;
    
    break;
  case 2:
    total = xs * quant;
    break;
  case 3:
    total = xb * quant;
    break;
  case 4:
    total = tr * quant;
    break;
  default:
    total = r * quant;
    break;

  }

  printf("%s%.2f\n", MSG, total);
  
  return 0;
  
}
