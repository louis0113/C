#include <stdio.h>


void Sort(int arr[], int n){
  int i, j, temp;
  for(i = 0; i < n - 1; i++){
    for(j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main (void){
  
  int a,b,c,x,l;  
  int numeros[3] = {a,b,c};
  int sortedNums[3];

   l = sizeof(numeros) / sizeof(numeros[0]);

  for(x = 0; x < l; x++){
    scanf("%d", &numeros[x]);
    sortedNums[x] = numeros[x];
  }

  Sort(sortedNums, l);

    for(x = 0; x < l; x++){

    printf("%d\n", sortedNums[x]);
    
  }
    puts("");
    
  for(x = 0; x < l; x++){

    printf("%d\n", numeros[x]);
    
  }
  
  
  
  return 0;

}
