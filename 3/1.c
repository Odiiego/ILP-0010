#include <stdio.h>

int main()
{
  int num;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  printf("\nO numero %d é %s", num, num % 2 == 0 ? "par" : "impar");
  return 0;
}