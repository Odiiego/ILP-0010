#include <stdio.h>

int main()
{
  float x1, y1, result1;
  float x2, y2, result2;

  x1 = 3;
  result1 = x1 * (x1 + 1) * x1++;

  // result1 = 3 * ( 3 + 1) * 3++
  // result1 = 12 * 3++
  // result1 = 36
  // e agora a variavel x1 é incrementada:
  // x1 = 3 + 1 == x1 = 4
  printf("%f\n", result1);
  printf("%f\n", x1);

  x2 = 5;
  y2 = 3;
  y2 *= x2 + 1;

  // y2 = y2 * (x2 + 1)
  // y2 = 03 * (05 + 1)
  // y2 = 03 * (06)
  // y2 = 18
  printf("%f\n", y2);
}