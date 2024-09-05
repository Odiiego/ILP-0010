#include <stdio.h>

int main()
{
  int n, acc, imp = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    acc += imp;
    imp += 2;
  }
  printf("%i", acc);
}