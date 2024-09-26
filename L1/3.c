#include <stdio.h>

int main()
{
  float sal;

  printf("Digite o salário: ");
  scanf("%f", &sal);

  sal *= 1.05;
  sal = sal > 750 ? sal : sal + 100;
  printf("salário reajustado: %.2f", sal);
}