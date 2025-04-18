#include <stdio.h>
#define COMISSAO 0.15

double salarioTotal(double salarioFixo, double totalVendas){

  double comissao =  totalVendas * COMISSAO;

  return salarioFixo + comissao;
  
} 

int main (void){

  char Name[30];
  double fixo, vendas, resultado;
  char c;
  scanf("%29[^\n]s", Name);
  while( (c = getchar()) != '\n' && c != EOF){}
  scanf("%lf %lf", &fixo, &vendas);
  resultado = salarioTotal(fixo, vendas);

  printf("TOTAL = R$ %.2lf\n", resultado);
  
  
  return 0;
  
} 
