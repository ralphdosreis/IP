#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int dia, mes, ano;
} Data;

void imprimirData(Data *ponteiro) // O tipo do ponteiro é o elemento que ele está apontando
{
  printf("%d/%d/%d\n", ponteiro->dia, ponteiro->mes, ponteiro->ano); // Se usa a seta pois o valor esta sendo acessado de forma indireta
}

int main()
{
  Data data;
  Data *p;

  p = &data; // Atribui o endereço da struct para o ponteiro

  data.dia = 24;
  data.mes = 04;
  data.ano = 2024;

  imprimirData(p);
  return 0;
}