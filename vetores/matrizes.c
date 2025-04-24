#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int matriz1[3][3];
  srand(time(NULL));

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      matriz1[i][j] = rand(); // Gera um número aleatório para cada posição da matriz
    }
  }

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matriz1[i][j]); // Imprime cada número de cada posição da matriz
    }
  }

  int matriz2[][3] = {1, 2, 3, 4, 5, 6, 7};

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matriz2[i][j]); // Imprime cada número de cada posição da matriz
    }
  }
  return 0;
}