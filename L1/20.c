#include <stdio.h>

int vinte(int n, float x)
{
  float acc = x;
  for (int i = 1; i < n; i++)
  {
    x *= acc;
  }

  printf("%f", x);
}

int main()
{
  vinte(2, 2);
}