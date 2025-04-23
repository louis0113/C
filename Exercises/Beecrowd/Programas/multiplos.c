#include <stdio.h>

void Checagem(int x, int y){

  if(x % y == 0){   
    puts("Sao Multiplos");
  } else {
    puts("Nao sao Multiplos");
  }

}

int main (void){

  int a,b;

  scanf("%d %d", &a, &b);

  if(a > b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    Checagem(b,a);
    
  } else {
    Checagem(b,a);
    
  }

  return 0;

}
