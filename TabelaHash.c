#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Lista
{
  int numero;
  struct Lista *proximo;
}
typedef struct Lista lista;

void adicionaNaLista(int valor, int tamanho,lista tabelaHash)
{
  int chave = valor%tamanho;
  lista novo = (lista *) malloc (sizeof(lista));
  lista aux;
  novo.proximo = NULL;
  novo.numero = valor;
  if (tabelaHash[chave] == NULL)
  {
    tabelaHash[chave] = novo;
  }
  else
  {
    aux = tabelaHash[chave];
    While (aux.proximo != NULL)
    {
      aux = aux.proximo;
    }
    aux.proximo = novo;
  }
}

int main()
{
  int tamanho = 17;
  lista tabelaHash[tamanho];
  int i;
  printf("\nDigite um valor Natural* para adicionar um valor à tabela Hash ou 0 para parar");
  scanf("%d",&i);

  while (i != 0)
  {
    adicionaNaLista(i,tamanho, tabelaHash);

  }
  return 0;
}
