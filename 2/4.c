#include <stdio.h>

int main()
{
  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  printf("\nOctal: %o \n", caractere);
  printf("Decimal: %d \n", caractere);
  printf("Hexadecimal: %x", caractere);
  return 0;
}