#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  int seleted_ddd = 0;
  printf("Digite o DDD: ");
  scanf(" %d", &seleted_ddd);
  clear_terminal();
  
  switch (seleted_ddd) {
  case 61:
    printf("A cidade é Brasília\n");
    break;
  case 71:
    printf("A cidade é Salvador\n");
    break;
  case 11:
    printf("A cidade é São Paulo\n");
    break;
  case 21:
    printf("A cidade é Rio de Janeiro\n");
    break;
  case 32:
    printf("A cidade é Juiz de Fora\n");
    break;
  case 19:
    printf("A cidade é Campinas\n");
    break;
  case 27:
    printf("A cidade é Vitória\n");
    break;
  case 31:
        printf("A cidade é Belo Horizonte\n");
    break;
  default:
    printf("Sem identificação\n"); break;
  }

  return EXIT_SUCCESS;
}

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}