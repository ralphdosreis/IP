#include <stdio.h>

int main()
{
  int num1[10]; // Atribui valores aleatorios para cada posição do vetor
  int num2[] = {1, 5, 6, 8, 2};
  int num3[5] = {1, 2, 3};          // Preenche com 0s as posições não declaradas do array
  // int num4[5] = {1, 2, 3, 4, 5, 6}; // Vai apresentar erro no momento de compilação, pois do declarado mais elementos do que o informado para o tamanho do array
  int num5[5] = {0};                // Todas as posições do array será preenchidas com 0s

  char letras[100]; // Preenchido com caracteres aleatórios
  char vogais[5] = {'a', 'b', 'c', 'd', 'e'};

  float notas[5] = {7.5, 8.3, 5.6}; // Preenche com 0s as posições não declaradas
  for (int i = 0; i < 5; i++)
  {
    printf("%f ", notas[i]);
  }

  for (int k = 0; k < 5; k++)
  {
    num2[k] *= 3;
  }

  for (int j = 0; j < 5; j++)
  {
    printf("%d ", num2[j]);
  }
  return 0;
}