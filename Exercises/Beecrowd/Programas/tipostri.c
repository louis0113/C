#include <stdio.h>
#include <math.h>

void ReverseBubbleSort(double arr[], int n){
  int x,j;
  for(x = 0; x < n - 1; x++){
    for(j = 0; j < n - x - 1; j++){
      if(arr[j] < arr[j+1]){
	double temp;
	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
      }
    }
  }
}

void SimpleCheck(double n1,double n2, double n3){

 if(n1 == n2 && n2 == n3){
   puts("TRAINGULO EQUILATERO");
 } else if((n1 == n2 && n2 != n3) || (n2 == n3 && n3 != n1) || (n1 == n3 && n3 !=n2)) {
   puts("TRIANGULO ISOSCELES");
 } else {
   printf("");
 }
}

void Checks(double x, double y, double z){
  
  double x2 = pow(x,2), y2 = pow(y,2), z2 = pow(z,2);
  
  if(x >= y + z){
    puts("NAO FORMA TRIANGULO");
  } else if(x2 == y2 + z2){
    puts("TRIANGULO RETANGULO");
  } else {
    
    if(x2 > y2 + z2){
      puts("TRIANGULO OBSTUSANGULO");
      SimpleCheck(x,y,z);
    } else {
      puts("TRIANGULO ACUTANGULO");
      SimpleCheck(x,y,z);
    }
    
  }

  }


int main (void){

  double a,b,c;
  int x;
  scanf("%lf %lf %lf", &a, &b, &c);
  double num[3] = {a,b,c};
  int lenght =  sizeof(num) / sizeof(num[0]);

  ReverseBubbleSort(num,lenght);
  
  a = num[0];
  b = num[1];
  c = num[2];
  
  Checks(a,b,c);
  
  
  return 0;

}
