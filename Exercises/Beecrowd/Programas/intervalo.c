#include <stdio.h>


int main (void) {

  float x;

  scanf("%f", &x);

  if(x >= 0.00 && x <= 25.00){
    puts("Intervalo [0,25]");
  } else if (x > 25.00 && x <= 50.0){
    puts("Intervalo (25,50]");
  } else if(x > 50.0 && x <= 75.00){
    puts("Intervalo (50,75]");
  } else if(x > 75.00 && x <= 100.0){
    puts("Intervalo (75,100]");
  } else {
    puts("Fora de intervalo");
  }
  
  return 0;

}
