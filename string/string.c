#include <stdio.h>
#include <string.h>

int main()
{
  int i, tamanho = 0;
  char palavras[50] = {"Meu nome e Ralph!"}; // Usa-se aspas duplas
  char nome[20];

  //  scanf("%10[^\n]", nome); // A função scanf por definição se somente até o primeiro espaço, porém isso pode ser contornado pelo uso de [^\n] na máscara do scanf e se pode configurar o máximo de caracteres a serem lidos. scanf por definição lê todos os caracteres inseridos
  // gets(nome); // O mesmo comportamento padrão de scanf. Uso não recomendado de gets
  fgets(palavras, 50, stdin); // Forma mais segura de ler uma string a partir do teclado. O primeiro paramêtro é o vetor onde o dado será armazenado, o segundo é o tamanho máximo e o terceiro é o método de insersão do dado

  i = 0;
  while (palavras[i] != '\0')
  {
    if (palavras[i] == '\n')
    { // Tirando o caractere de nova linha
      palavras[i] = '\0';
    }
    i++;
  }

  i = 0;
  while (palavras[i] != '\0') // Todo vetor de caracters termina com \0 que na tabela ascii representa o 0
  {
    printf("%d = %d\n", i, palavras[i]); // Imprime cada index de cada caracter do vetor palavras e o código da tabela ascii que representa o caracter. Para imprimir o caracter se coloca a máscara %c;
    tamanho++;
    i++;
  }
  printf("%s\n", nome);
  printf("%s\n", palavras);
  printf("A palavra inserida tem %d caracteres!\n", tamanho);
  printf("Usando a funcao strlen o tamanho do dado passado e: %lu\n", strlen(palavras));

  char palavra1[50] = {"Oi!"};
  char palavra2[50] = {"Bom dia.\n"};
  strcat(palavra1, palavra2); // Contacatena duas strings. Funciona como uma junção das duas até encontrar o \0
  printf("%s", palavra1);
  char palavra3[50] = {"abacate"};
  char palavra4[50] = {"bola"};
  printf("Resultado: %d\n", strcmp(palavra3, palavra4)); // Compara duas strings. -1 indicando que o parâmetro 1 é menor que o parâmetro 2. 0 indicando que os parâmetros são iguais. 1 caso o primeiro seja maior que o segundo parâmetro

  printf("Antes de copiar:\nPalavra 3: %s\nPalavra 4: %s\n", palavra3, palavra4);

  strcpy(palavra3, palavra4); // O primeiro parâmetro é o destino do que está sendo copiado e o segundo o que foi copiado

  printf("Depois de ser copiado:\nPalavra 3: %s\nPalavra 4: %s\n", palavra3, palavra4);

  char palavra5[50] = {"literatura"};
  char *letra1, *letra2;
  letra1 = strchr(palavra5, 'a'); // Retorna um ponteiro que aponta para o endereço de memória da primeira ocorrência do segundo paramêtro. Se não encontrar retorna NULL
  letra2 = strrchr(palavra5, 'a');
  printf("%c\n", *letra1);
  printf("%c\n", *(letra1 + 1)); // Usando aritmética de ponteiros para apontar para os outros endereços de memória
  printf("%c\n", *(letra1 + 2));

  printf("Ultima ocorrencia de a em Palavra5: %c\n", *letra2);
  printf("Conteudo apos a ultima ocorrencia do caracter a em Palavra5: %c\n", *(letra2 + 1)); // Não retorna nada pois a ultima ocorrência do caracter é na ultima posição

  char palavra6[50] = {"Bom dia simpatia!"};
  char str[] = {"lua"};
  char *ponteiro;

  ponteiro = strstr(palavra6, str); // Retorna um ponteiro para o endereço de memória do início da string procurada

  if (ponteiro)
  {
    printf("%c%c%c\n", *ponteiro, *(ponteiro + 1), *(ponteiro + 2));
  }
  else
  {
    printf("String nao encontrada!\n");
  }

  char nomes[5][25]; // Criando uma matriz que vai receber 5 nomes (cada um em uma linha) com no máximo 25 caracteres
  int linha;
  for (linha = 0; linha < 5; linha++)
  {
    printf("Digite o nome da posicao %d: ", linha);
    fgets(nomes[linha], 25, stdin);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("%dº nome: %s\n", i, nomes[i]);
  }
  return 0;
}
