int particiona(int A[], int inicio, int fim){
  int pivo = fim;
  int k = inicio;
  int i = 0;

  for(i = inicio; i < fim; i++){
    if(A[i] <= A[pivo]){
      swap(A[k], A[i]);
      k++;
    }
  }
  if(A[k] > A[pivo]){
    swap(A[k], A[pivo]);
  }
  return pivo;
}

void quickSort(int A[], int inicio, int fim){
  int pivo = 0;
  if(inicio < fim){
    pivo = particiona(A, inicio, fim);
    quickSort(A, inicio, pivo-1);
    quickSort(A, pivo+1, fim);
  }
}
