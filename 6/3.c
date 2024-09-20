#include <stdio.h>

int fat(int n)
{
  int f = 1;
  while (n > 0)
  {
    f *= n--;
  }
  printf("\n%i", f);
  return n;
}

int main()
{
  int n;
  printf("Digite um numero: ");
  scanf("%i", &n);

  fat(n);

  return 0;
}