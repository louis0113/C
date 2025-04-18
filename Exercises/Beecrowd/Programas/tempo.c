#include <stdio.h>
#include <math.h>
#define TIME 60
void horas (int seg){
  
  int r, x;
  
  for( x = 2; x >= 0; x--){   
    r = seg / pow(TIME,x);
    seg %= (int)pow(TIME,x);

    if(x != 0){
    printf("%d:", r);
    } else {
      printf("%d\n", r);
    }   
  }
}


int main  (void){

  int s;scanf("%d", &s);horas(s);
  
  return 0;

}
