#include <stdio.h>

int main (void){

  float x, y;

  scanf("%f %f", &x, &y);

  if(x > 0.0 && y > 0.0 ){
    puts("Q1");
  } else if(x < 0.0 && y < 0.0){
    puts("Q3");
      } else if (x > 0.0 && y < 0.0 ){
    puts("Q4");
  } else if (x < 0.0 && y > 0.0){
    puts("Q2");
  } else if(x == 0 && (y > 0.00 || y < 0.00)){
    puts("Eixo Y");
      } else if (y == 0 && (x > 0.0 || x < 0.00)){
    puts("Eixo X");
  } else {
    puts("Origem");
  }

  return 0;
  
}
