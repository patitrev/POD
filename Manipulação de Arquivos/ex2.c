
#include<stdio.h>
#include<stdlib.h>

int main()
{
  char texto[50],a[100];
  FILE *file;

  scanf("%s",texto);

  int i = 0;
  file = fopen(texto, "r");

  if (file == NULL)
  {
    printf("Deu caca!\n");
    return 1;
  }

  while(fscanf(file,"%s",a) > 0)
  {
    i++
  }

  printf("\n%d\n",i);
  fclose(file);
  return 0;
}
