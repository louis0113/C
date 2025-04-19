#include <stdio.h>
#define ANO 365
#define MES 30
int main (void) {

  int dias, ano, mes;

  scanf("%d", &dias);

  ano = dias / ANO;
  dias %= ANO;
  mes = dias / MES;
  dias %= MES;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
  
  return 0;

}
