#include <stdio.h>

int fib(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int a;
  printf("\nDigite um numero: ");
  scanf("%i", &a);
  printf("\n%i", fib(a));
  return 0;
}