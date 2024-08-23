#include <stdio.h>

int main()
{
  float faltas, media;

  printf("Quantas vezes o aluno faltou? ");
  scanf("%f", &faltas);

  printf("Qual a nota do aluno? ");
  scanf("%f", &media);

  if (faltas <= 5)
  {
    if (media < 6)
    {
      printf("\nConceito: C");
      return 0;
    }
    else if (media < 7.5)
    {
      printf("\nConceito: B");
      return 0;
    }
    else if (media < 9)
    {
      printf("\nConceito: A");
      return 0;
    }
    else if (media >= 9)
    {
      // pra tirar nota boa assim só colando? kkkk
      // não entendi mas okay ;*
      printf("\nConceito: E");
      return 0;
    }
  }

  else
  {
    printf("Conceito: F");
    return 0;
  }
}