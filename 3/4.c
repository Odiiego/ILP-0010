#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  double x1, x2;

  printf("Digite o coeficiente a: ");
  scanf("%f", &a);

  printf("Digite o coeficiente b: ");
  scanf("%f", &b);

  printf("Digite o coeficiente c: ");
  scanf("%f", &c);

  if (!a)
  {
    printf("O coeficiente 'a' não pode ser 0!");
    return 1;
  };

  x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  printf("x1 = %.1f\n", x1);
  printf("x2 = %.1f", x2);
  return 0;
}