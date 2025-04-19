#include <stdio.h>
#define NOTAS " nota(s) de R$ "
#define MOEDAS " moeda(s) de R$ "
#include <stdio.h>
#define NOTAS " nota(s) de R$ "
#define MOEDAS " moeda(s) de R$ "

int main (void){
  int x;
  double valor;
  int valorInt, nota;
  double notas[6] = {100.00, 50.00, 20.00, 10.00,5.00,2.00};
  double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
  int notasInt[6];
  int moedasInt[6];

  for(x = 0; x < 6; x++){
    notasInt[x] = (int)(notas[x] * 100);
    moedasInt[x] = (int)(moedas[x] * 100);

  }
  scanf("%lf", &valor);
  valorInt = (int)(valor * 100);
  
  puts("NOTAS:");

  for(x = 0; x < 6; x++){
    nota = valorInt / notasInt[x];
    valorInt %= notasInt[x];
    printf("%d%s%.2lf\n", nota, NOTAS, notas[x]);
  }

  puts("MOEDAS:");
  
    for(x = 0; x < 6; x++){
    nota = valorInt / moedasInt[x];
    valorInt %= moedasInt[x];
    printf("%d%s%.2lf\n", nota, MOEDAS, moedas[x]);
      
  }
    
  return 0;

}
