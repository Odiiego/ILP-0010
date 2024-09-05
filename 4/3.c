#include <stdio.h>

int main()
{
  int n, f = 1;
  printf("Digite um numero: ");
  scanf("%i", &n);

  while (n > 0)
  {
    f *= n--;
  }
  printf("\n%i", f);
}