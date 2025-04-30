#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int dia, mes, ano;
} DataNas;

typedef struct
{
  char nome[50];
  int idade;
  char sexo;
  DataNas dataNas; // Criando uma variável que é do tipo DataNas(Struct)
} Pessoa;          // Por convenção se usa maiúscula na primeira letra de uma struct

void imprimirPessoa(Pessoa p)
{ // Criação de um procedimento (função que não retorna nada)
  printf("Nome: %s\n", p.nome);
  printf("Idade: %d\n", p.idade);
  printf("Sexo: %c\n", p.sexo);
  printf("Data de nascimento: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

int main()
{
  Pessoa pessoa; // Criando a variável do tipo Pessoa(Irá receber suas propriedades)
  // strcpy(pessoa.nome, "Ralph"); // O primeiro parâmetro é o destino do que está sendo copiado e o segundo o que foi copiado
  // pessoa.idade = 25;
  // pessoa.sexo = 'M';
  DataNas dataNas;                                                          // Criando uma variável do tipo DataNas somente para verificar seu tamanho
  printf("A struct DataNas ocupa %ld bytes de memoria\n", sizeof(dataNas)); // 12 (3 * int(4 bytes))
  printf("A struct Pessoa ocupa %ld bytes de memoria\n", sizeof(pessoa));   // 72. Como há na estrutura variáveis de diversos tipos o computador usa 5 bytes a mais de memória do que a soma dos bytes de cada variável interna, para gerênciar estes dados na memória
  printf("Informe o nome da pessoa: ");
  fgets(pessoa.nome, 50, stdin);

  int len = strlen(pessoa.nome);               // Atribui o valor de length pessoa.nome para a variável len
  if (len > 0 && pessoa.nome[len - 1] == '\n') // Elimina o espaço da leitura do dado pessoa.nome
  {
    pessoa.nome[len - 1] = '\0';
  }
  printf("Informe a idade da pessoa: ");
  scanf("%d", &pessoa.idade);
  printf("Informe o sexo da pessoa(M/F): ");
  scanf(" %c", &pessoa.sexo); // O espaço na mascára de leitura é responsável por consumir quaisquer caracteres em branco remanescentes, como o \n do scanf anterior
  printf("Informe a data de nascimento no formato dd mm aaaa: ");
  scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

  imprimirPessoa(pessoa);
  return 0;
}