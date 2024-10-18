#include <stdio.h>

double pot(double a, unsigned int b)
{
  if (b == 2)
  {
    return a * a;
  }
  else
  {
    return a * pot(a, b - 1);
  }
}

int main()
{
  double a;
  unsigned int b;
  printf("\nDigite a e b:");
  scanf("%lf %u", &a, &b);
  printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));
  return 0;
}