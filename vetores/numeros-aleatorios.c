#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int num[10];

  srand(time(NULL)); // Muda a semente da geração de números aleatórios. Atribui como semente o timer do PC que é um valor que está em constante mudança, gerando assim números aleatórios a cada compilação

  for (int i = 0; i < 10; i++)
  {
    num[i] = rand(); // Gera um pseudo numero aleatorio. Pseudo pq não se pode criar nada do 0 então os números gerados são a partir de uma semente (numero pre-estabelecido na implementação da funcão)
  }

  for (int j = 0; j < 10; j++)
  {
    printf("%d ", num[j]);
  }
  printf("\n");

  int num2[10];
  for (int k=0;k<10;k++) {
    num2[k] = 1 + rand() % 99; // Números aleatórios entre 1 e 99
  }
  
  for (int h=0;h<10;h++) {
    printf("%d ", num2[h]);
  }
  return 0;
}