#include <stdio.h>
#include <math.h>

float soma(int n, float x)
{
  float acc = 1;
  for (int i = 1; i <= n; i++)
  {
    acc += pow(x, i);
  };

  printf("%f", acc);
}

int main()
{
  soma(2, 2);
}