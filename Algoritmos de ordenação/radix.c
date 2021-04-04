#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int buscaMax(int A[], int tamanho)
{
  int i ;
  int maior = A[0];
  for(i = 1; i < tamanho; i++)
  {
    if(A[i] > maior)
    {
      maior = A[i];
    }
  }
  return maior;
}


void countingSort(int A[], int d, int tamanho)
{
  int i, digito;
  int auxiliar[tamanho];
  int contagem[]={0,0,0,0,0,0,0,0,0,0};
  int posicao[]={0,0,0,0,0,0,0,0,0,0};

  for(i = 0; i < tamanho; i++)
  {
    digito = (A[i]/d)%10;
    contagem[digito]++;
  }

  for(i = 1; i < 10; i++)
  {
    posicao[i] = contagem[i-1] + posicao[i-1];
  }

  for (i = 0; i < tamanho; i++)
  {
    digito = (A[i]/d)%10;
    auxiliar[posicao[digito]] = A[i];
    posicao[digito]++;
  }

  for(i = 0; i < tamanho; i++)
  {
    A[i] = auxiliar[i];
  }
}


void radixSort(int A[], int tamanho)
{
  int max,i;
  max = buscaMax(A,tamanho);
  for(i = 1; (max/i) > 0; i*=10)
  {
    countingSort(A,i, tamanho);
  }
}


