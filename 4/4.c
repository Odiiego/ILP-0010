#include <stdio.h>

int main()
{
  int x, n, acc = 1;
  printf("Digite um numero: ");
  scanf("%d", &x);

  printf("Digite uma potencia: ");
  scanf("%d", &n);

  for (int i = n; i > 0; i--)
  {
    acc *= x;
  }
  printf("%i^%i = %i", x, n, acc);
}