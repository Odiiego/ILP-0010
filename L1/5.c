#include <stdio.h>

int main()
{
  int n1, n2;

  printf("Digite o primeiro numero: ");
  scanf("%i", &n1);

  printf("Digite o segundo numero: ");
  scanf("%i", &n2);

  n1 = n1 > n2 ? n1 : n2;

  printf("Digite o terceiro numero: ");
  scanf("%i", &n2);

  printf("O maior numero é: %i", n1 > n2 ? n1 : n2);
}