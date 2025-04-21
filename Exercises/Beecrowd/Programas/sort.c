#include <stdio.h>

int main (void){

  int a,b,c,x;
  int numeros[3] = {a,b,c};

  for(x = 0; x < 3; x++){
    scanf("%d", &numeros[x]);
  }
  
  for(x = 0; x < 3; x++){

    printf("%d\n", numeros[x]);
    
  }
  
  return 0;

}
