#include <stdio.h>

int main()
{
  int x, y;

  x = 5;         // 7
  y = x++ + ++x; // 12
  printf("%i, ", x);
  printf("%i\n", y);

  x = 3;                 // 4
  y = x * (x + 1) * x++; // 36
  printf("%i, ", x);
  printf("%i\n", y);

  x = 5; // 5
  y = 3; // 18
  y *= x + 1;
  printf("%i, ", x);
  printf("%i\n", y);
}