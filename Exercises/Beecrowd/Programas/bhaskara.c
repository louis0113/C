#include <stdio.h>
#include <math.h>

double delta(double n1, double n2,double n3){

  return pow(n2,2) - (4 * n1 * n3);

}

void raizes(double delta, double n1, double n2){
  double r1, r2;
  if(delta < 0 || n1 == 0){
    printf("Impossível calcular\n");
  } else {
    r1 = ((-1 * n2 ) + sqrt(delta)) / (2 * n1);
    r2 = ((-1 * n2 ) - sqrt(delta)) / (2 * n1);
    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
}
int main (void){

  double a,b,c,d;

  scanf("%lf %lf %lf", &a, &b, &c);
  d = delta(a,b,c);
  raizes(d,a,b);
 
  return 0;

}
