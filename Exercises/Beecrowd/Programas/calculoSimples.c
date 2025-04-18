#include <stdio.h>

float valorTotal(int numPecas, float valorPecas){

  return numPecas * valorPecas;

}

int main (void){

  int cod1, cod2, num1, num2;
  float valor1, valor2, total1, total2, vendasTotal;
  

  scanf("%d %d %f", &cod1, &num1, &valor1);fflush(stdin);
  scanf("%d %d %f", &cod2, &num2, &valor2);fflush(stdin);
  total1= valorTotal(num1, valor1);
  total2 = valorTotal(num2, valor2);
  vendasTotal = total1 + total2;
  printf("VALOR A PAGAR: R$ %.2f\n", vendasTotal);
  
  
  return 0;
  
}
