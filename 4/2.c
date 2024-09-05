#include <stdio.h>

int main()
{
  int n, s;
  do
  {
    printf("[ 0 PARA ENCERRAR ] Digite um número: ");
    scanf("%i", &n);

    if (n != 0)
    {
      printf("%i * %i = %i\n", n, n, n * n);
    }
    else
    {
      printf("programa encerrado.");
    }
  } while (n != 0);
}