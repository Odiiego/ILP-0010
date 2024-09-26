#include <stdio.h>

int main()
{
  int placa;
  do
  {
    printf("Digite os 4 numeros da placa: ");
    scanf("%i", &placa);
  } while (placa >= 9999 || placa < 0);

  switch (placa % 10)
  {
  case 1:
  case 2:
    printf("Seu rodizio é segunda-feira");
    break;
  case 3:
  case 4:
    printf("Seu rodizio é terca-feira");
    break;
  case 5:
  case 6:
    printf("Seu rodizio é quarta-feira");
    break;
  case 7:
  case 8:
    printf("Seu rodizio é quinta-feira");
    break;
  case 9:
  case 0:
    printf("Seu rodizio é sexta-feira");
    break;
  }
}