#include <stdio.h>

int main()
{
  float fahrenheit, celsius;

  printf("Digite uma temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("\n%.1f°F = %.1f°C", fahrenheit, celsius);
  return 0;
}
