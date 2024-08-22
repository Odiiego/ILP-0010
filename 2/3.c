#include <stdio.h>
#define PI 3.1415

int main()
{
  float raio, perimetro, area;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  perimetro = 2 * PI * raio;
  area = PI * (raio * raio);

  printf("\nPerimetro = %.3f\n", perimetro);
  printf("Area = %.3f", area);
  return 0;
}