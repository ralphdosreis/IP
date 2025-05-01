#include <stdio.h>

int fatorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * fatorial(n - 1);
  }
}

int main()
{
  int n;
  printf("informe um numero para ser calculado o fatorial: ");
  scanf("%d", &n);

  int fat = fatorial(n);
  printf("%d! = %d\n", n, fat);

  return 0;
}