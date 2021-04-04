void criaHeap(int A[], int i, int n){
  int maior = i;
  int left = 2*i+1;
  int right = 2*i+2;
  if(left < n && A[left] > A[i]){
    maior = left;
  }
  if(right < n && A[right] > A[maior]){
    maior = right;
  }
  if(maior != i){
    swap(A[i],A[maior]);
    criaHeap(A, maior, n);
  }
}

void heapSort(int A[], int n){
  int k;

  for(k = n/2-1; k >= 0; k--){
    criaHeap(A, k, n);
  }
  for(k = n-1; k >= 1; k--){
    swap(A[0],A[k]);
    criaHeap(A, 0, k);
  }
}
