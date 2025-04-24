#include <stdio.h>

int main()
{
  int A = 100, *B, **C;
  B = &A;
  C = &B;

  printf("Conteudo de A: %d\n", A);          // 100
  printf("Endereco de A: %p\n", &A);         // EndA
  printf("Conteudo de B: %p\n", B);          // EndA
  printf("Endereco de B: %p\n", &B);         // EndB
  printf("Valor apontado por B: %d\n", *B);  // 100
  printf("Conteudo de C: %p\n", C);          // EndB
  printf("Endereco de C: %p\n", &C);         // EndC
  printf("Valor apontado por C: %d\n", **C); // 100
  return 0;
}