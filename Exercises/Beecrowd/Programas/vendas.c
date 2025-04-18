#include <stdio.h>
#define COMISSAO 0.15

double salarioTotal(double salarioFixo, double totalVendas){

  double comissao =  totalVendas * COMISSAO;

  return salarioFixo + comissao;
  
} 

int main (void){

  char Name[30];
  double fixo, vendas, resultado;
  printf("Digite seu nome: ");scanf("%29[^\n]s", Name);fflush(stdin);
  scanf("%lf", &fixo);fflush(stdin);
  scanf("%lf", &vendas);fflush(stdin);
  resultado = salarioTotal(fixo, vendas);

  printf("TOTAL = R$%.2lf\n", resultado);
  
  
  return 0;
  
} 
