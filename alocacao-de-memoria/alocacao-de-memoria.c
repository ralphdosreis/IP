// #include <stdio.h>
  // #include <stdlib.h>

// int main()
//   {
//     int tam, *vet;
//     printf("Quando inteiros guardar: ");
//     scanf("%d", &tam);

//     // vet = malloc(sizeof(int) * tam); // Retorna um ponteiro que aponta para o endereço de memória alocada ou NULL em caso de estouro de memória
//     vet = calloc(tam, sizeof(int)); // Funciona como malloc porém são dois parâmetros na função(Quantidade de elementos e seu tamanho)
//     if (vet)
//     {
//       printf("Memoria alocada com sucesso!\n");
//       for (int i = 0; i < tam; i++)
//       {
//         printf("Informe o %dº inteiro: ", i + 1);
//         scanf("%d", &vet[i]);
//       }
//       for (int i = 0; i < tam; i++)
//       {
//         printf("O %dº inteiro informado foi %d\n", i + 1, vet[i]);
//       }

//       printf("\n");
//       printf("Digite um novo valor para o tamanho do vetor: ");
//       scanf("%d", &tam);

//       vet = realloc(vet, tam * sizeof(int)); // Copia o espaço de memória informado no primeiro parâmetro e aloca um novo espaço de memória com o número de bytes que será alocado(segundo parâmetro)
//       printf("Vetor reallocado:\n");
//       for (int i = 0; i < tam; i++)
//       {
//         printf("%d ", *(vet + i));
//       }
//       printf("\n");
//       free(vet); // Libera a memória alocada dinâmicamente, pois como está memória foi alocada dinâmicamente o computador não há libera após o uso
//     }
//     else
//     {
//       printf("Erro na alocacao de memoria!\n");
//     }
//   }


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int **matriz, i,j, colunas, linhas; // Criação de um ponteiro para ponteiros pois na matriz ele vai apontar para ponteiros que serão as colunas e que apontaram para os valores inteiros da matriz
  printf("Quantas linhas e colunas a matriz tera: ");
  scanf("%d %d", &linhas, &colunas);
  

  matriz = malloc(linhas * sizeof(int*)); // Alocação de mémoria para a quantidade de linhas. O ponteiro para ponteiros está apontando para n linhas (ponteiros que apontam para valores da mariz)

  for (i=0;i<linhas;i++) {
    matriz[i] = malloc(colunas * sizeof(int)); // Alocação de memoria para cada coluna da matriz. A matriz[i] representa cada linha da matriz
  }

  srand(time(NULL));
  for (i=0;i<linhas;i++) {
    for (j=0;j<colunas;j++) {
      matriz[i][j] = rand()%100;
    }
  }

  for (i=0;i<linhas;i++) {
    for (j=0;j<colunas;j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  for (i=0;i<linhas;i++) {
    free(matriz[i]);
  }
  free(matriz);
}