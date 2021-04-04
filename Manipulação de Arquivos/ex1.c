
#include <ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *file;
  FILE *novo;
  char a;
  file = fopen("tesc.txt","r");
  if (file == NULL)
  {
    printf("Deu caca!\n");
    return 1;
  }
  novo = fopen("losc.txt","w");
  while (!feof(file))
  {
    a = fgetc(file);
    fputc(a,novo);
  }
  fclose(file);
  fclose(novo);
}
