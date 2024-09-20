#include <stdio.h>

double max(double a, double b)
{
  if (a > b)
    return a;
  return b;
}

int main()
{
  double num1 = 5.0, num2 = 10.0;
  printf("Max(%.2f, %.2f) => %.2f\n", num1, num2, max(num1, num2));

  num1 = -2.0, num2 = -8.0;
  printf("Max(%.2f, %.2f) => %.2f\n", num1, num2, max(num1, num2));

  num1 = 3.5, num2 = 3.5;
  printf("Max(%.2f, %.2f) => %.2f\n", num1, num2, max(num1, num2));

  num1 = 0.0, num2 = 5.0;
  printf("Max(%.2f, %.2f) => %.2f\n", num1, num2, max(num1, num2));

  return 0;
}