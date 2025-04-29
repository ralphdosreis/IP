#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tam, *vet;
  printf("Quando inteiros guardar: ");
  scanf("%d", &tam);

  // vet = malloc(sizeof(int) * tam); // Retorna um ponteiro que aponta para o endereço de memória alocada ou NULL em caso de estouro de memória
  vet = calloc(tam, sizeof(int)); // Funciona como malloc porém são dois parâmetros na função(Quantidade de elementos e seu tamanho)
  if (vet)
  {
    printf("Memoria alocada com sucesso!\n");
    for (int i = 0; i < tam; i++)
    {
      printf("Informe o %dº inteiro: ", i + 1);
      scanf("%d", &vet[i]);
    }
    for (int i = 0; i < tam; i++)
    {
      printf("O %dº inteiro informado foi %d\n", i + 1, vet[i]);
    }

    printf("\n");
    printf("Digite um novo valor para o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = realloc(vet, tam * sizeof(int)); // Copia o espaço de memória informado no primeiro parâmetro e aloca um novo espaço de memória com o número de bytes que será alocado(segundo parâmetro)
    printf("Vetor reallocado:\n");
    for (int i = 0; i < tam; i++)
    {
      printf("%d ", *(vet + i));
    }
    printf("\n");
  }
  else
  {
    printf("Erro na alocacao de memoria!\n");
  }
}
