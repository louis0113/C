#include <stdio.h>
#define MSG " notas(s) de R$ "

int main (void){

  unsigned int valor, nota, x;
  int valores[7] = {100,50,20,10,5,2,1};
  int lenght = sizeof(valores) / sizeof(valores[0]);

  scanf("%u", &valor);
  
  for(x = 0; x < lenght; x++){
    nota =  valor / valores[x];
    valor %= valores[x];
    printf("%u%s%u,00\n", nota, MSG,valores[x]);

  }
 
  return 0;

}
