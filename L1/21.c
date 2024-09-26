#include <stdio.h>

int fat(int n)
{
  int acc = 1;

  while (n > 0)
  {
    acc *= n--;
  }

  printf("%i", acc);
}

int main()
{
  fat(5);
}