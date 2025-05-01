#include <stdio.h>
// Recursividade é usada em casos que necessita de chamadas sucessivas de uma função


void imprimirDecrescente(int n) {
  if (n == 0) {
    printf("%d ", n);
  } else {
    printf("%d ", n);
    imprimirDecrescente(n - 1);
  }
}

void imprimirCrescente(int n) { // Neste caso o programa cria uma pilha de numeros não printados ainda e quando se seja no caso base os valores são printados
  if (n == 0) {
    printf("%d ", n);
  } else {
    imprimirCrescente(n - 1);
    printf("%d ", n);
  }
}

int main() {
  int n;
  printf("Informe um número diferente de 0: ");
  scanf("%d", &n);

  imprimirDecrescente(n);
  printf("\n");

  imprimirCrescente(n);
  printf("\n");

  return 0;
}