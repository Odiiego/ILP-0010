#include <stdio.h>

int main()
{
  int acc, n;
  do
  {
    printf("Digite um numero: ");
    scanf("%i", &n);
    acc += n;
  } while (n > 0);

  printf("%i", acc);
}