#include <stdio.h>

int prod(int a, int b)
{
  if (b == 0)
  {
    return 0;
  }
  else
  {
    return a + prod(a, b - 1);
  }
}

int main()
{
  int a, b;
  printf("\nDigite a e b:");
  scanf("%i %i", &a, &b);
  printf("\nproduto de %d e %d: %d", a, b, prod(a, b));
  return 0;
}