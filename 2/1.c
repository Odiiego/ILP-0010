#include <stdio.h>

int main()
{
  float peso, altura, imc;

  printf("Digite seu peso em quilogramas: ");
  scanf("%f", &peso);

  printf("Digite sua altura em metros: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nSeu IMC é igual a %.2f", imc);
  return 0;
}