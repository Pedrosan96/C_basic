#include<stdio.h>

void quick_sort(int * arr, int start, int end);
void swap(int * arr, int a, int b);
int partition(int * arr, int start, int end);
void imprimir_arreglo(int * arr, int size);

int main(void){
  int arreglo[]={15, 0, 2, 10, 20, 17, 5};
  imprimir_arreglo(arreglo, 7);
  quick_sort(arreglo, 0, 6);
  imprimir_arreglo(arreglo, 7);

  return 0;
}

void quick_sort(int * arr, int start, int end){
  if (start >= end){
    return ;
  }
  else{
  int index= partition(arr, start, end);
  quick_sort(arr, start, index -1);
  quick_sort(arr, index +1, end);
  }
}

int partition(int * arr, int start, int end){
  int init = start+1;
  int valPivot = arr[start];

  for (int i = init; i <= end; i++) {
    if(arr[i] < valPivot){
      swap(arr, i, init);
      init++;
    }
  }
  swap(arr, (init-1), start);
  return (init-1);
}

void swap(int * arr, int a, int b){
  int temp = arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}
 void imprimir_arreglo(int *arr, int size){
   for (int i = 0; i < size; i++) {
     printf("%i, ", arr[i]);
   }
   printf("\n");
 }
