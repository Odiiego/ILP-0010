#include <stdio.h>

void rodizio(int digito)
{
  switch (digito)
  {
  case (1):
  case (2):
    printf("Seu Rodizio é Segunda-Feira");
    break;
  case (3):
  case (4):
    printf("Seu Rodizio é Terça-Feira");
    break;
  case (5):
  case (6):
    printf("Seu Rodizio é Quarta-Feira");
    break;
  case (7):
  case (8):
    printf("Seu Rodizio é Quinta-Feira");
    break;
  case (9):
  case (0):
    printf("Seu Rodizio é Sexta-Feira");
    break;
  }
}

int main()
{
  int digito;
  printf("Qual o final da sua placa: ");
  scanf("%d", &digito);

  rodizio(digito);

  return 0;
}