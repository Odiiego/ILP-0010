#include <stdio.h>

int inv(int a)
{
  if (a == 0)
  {
    return 0;
  };
  printf("%i", a % 10);
  inv(a / 10);
}

int main()
{
  int a;
  printf("Digite um numero: ");
  scanf("%i", &a);
  inv(a);
  return 0;
}