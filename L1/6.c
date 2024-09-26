#include <stdio.h>

int main()
{
  int n1, n2, n3, temp;

  printf("Digite o primeiro numero: ");
  scanf("%i", &n1);
  printf("Digite o segundo numero: ");
  scanf("%i", &n2);
  printf("Digite o terceiro numero: ");
  scanf("%i", &n3);

  if (n1 > n2)
  {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }

  if (n1 > n3)
  {
    temp = n1;
    n1 = n3;
    n3 = temp;
  }
  if (n2 > n3)
  {
    temp = n2;
    n2 = n3;
    n3 = temp;
  }

  printf("%i, %i, %i", n1, n2, n3);
}