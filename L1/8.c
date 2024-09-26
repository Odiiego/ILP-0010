#include <stdio.h>

int main()
{
  int err;
  char *s;
  printf("Digite o número de erros: ");
  scanf("%i", &err);
  s = err > 1 ? "s" : "";
  printf("%i erro%s detectado%s", err, s, s);
}