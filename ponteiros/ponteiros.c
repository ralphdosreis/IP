// Um ponteiro armazena o endereço de memória do seu tipo
// Se usa o * quando se cria o ponteiro e quando se deseja acessar o conteúdo apontado pelo ponteiro
// Imprimir o endereço de memória do nome do vetor/vetor equilave a imprimir o endereço de memória aonde ele começa
#include <stdio.h>

void imprimirVetor(int *v, int tam) // O primeiro parâmetro quer dizer que a função receberá um inteiro e este parâmetro apontará para ele pois o parâmetro é um ponteiro
{
  int i;
  for (i = 0; i < tam; i++)
  {
    printf("%d ", *(v + i));
  }
  printf("\n");
}

void imprimirVetorChar(char *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    printf("%c ", *(v + i)); // Imprime o conteúdo apontado pela ponteiro em cada iteração
  }
  printf("\n");
}

void mudaVetor(int *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    printf("Digite um valor qualquer: ");
    scanf("%d", v + i); // Insere um novo valor para cada endereço de memória pontado pelo ponteiro e acessado a cada iteração. Faz uma passagem de valor por referência pois altera o valor original do dado passado, pois acessa cada endereço de mémoria deste dado. Se não houvesse essa alteração/acesso da memória está passsagem seria definida como passagem por valor
  }
}

int main()
{
  // int *valor1, valor2 = 50;
  // char *caracter1, caracter2 = 'r';

  // valor1 = &valor2;
  // caracter1 = &caracter2;

  // printf("Valor da variavel valor2: %d\n", valor2);
  // printf("Endereco da variavel valor2: %p\n", &valor2);
  // printf("Conteudo da variavel valor1: %p\n", valor1);
  // printf("Conteudo apontado pela variavel valor1: %d\n", *valor1);

  // printf("\n\n");
  // printf("Valor da variavel caracter2: %c\n", caracter2);
  // printf("Endereco da variavel caracter2: %p\n", &caracter2);
  // printf("Conteudo da variavel caracter1: %p\n", caracter1);
  // printf("Conteudo apontado pela variavel caracter1: %c\n", *caracter1);

  int i, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  char letras[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'h', 'i', 'j'};

  mudaVetor(vet, 10);
  imprimirVetorChar(letras, 10);
  imprimirVetor(vet, 10);

  // printf("%p\t%p\n", vet, &vet[0]); // Provando que um vetor na verdade é um ponteiro para seu primeiro elemento. Os endereços de memória são iguais

  // for (i = 0; i < 10; i++)
  // {
  //   printf("%d ", *(vet + i)); // Realizando a aritmetica de ponteiros. A cada iteração o loop mostra o valor do endereço de memória do ponteiro/vetor vet + i (salta um endereço de memória)
  // }
  return 0;
}