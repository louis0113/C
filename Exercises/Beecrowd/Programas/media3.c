#include <stdio.h>
#define P1 2
#define P2 3
#define P3 4
#define P4 1


float priMedia (float a, float b, float c, float d){
  
  
  float media = (a * P1 + b * P2 + c * P3 + d * P4) / (P1 + P2 + P3 + P4);

  return media;

}

float secMedia (float m, float nn) {

  return (m + nn) / 2;

}

int main (void) {

  float n1,n2,n3,n4,r1,r2,n;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  r1 = priMedia(n1,n2,n3,n4);
  printf("Media: %.1f\n", r1);
  
    if(r1 >= 7.0){
      puts("Aluno aprovado.");
	} else if (r1 >= 5.0 && r1 < 7.0 ){
      puts("Aluno em exame.");
      scanf("%f", &n);
      printf("Nota do exame: %.1f\n", n);
      r2 = secMedia(r1, n);
      if(r2 >= 5.0){
	puts("Aluno aprovado.");
      } else {
	puts("Aluno reprovado.");
      }
      printf("Media final: %.1f\n", r2);
    } else {
      puts("Aluno reprovado.");
    }
   
  return 0;

}
