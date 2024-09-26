#include <stdio.h>

int main()
{
  float acc;
  int n, counter;
  do
  {
    printf("Digite um numero: ");
    scanf("%i", &n);
    acc += n;
    counter += n > 0 ? 1 : 0;
  } while (n > 0);

  acc = acc / counter;

  printf("%.2f", acc);
}