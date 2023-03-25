#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  int readed_value = 0;
  printf("Digite o número: ");
  scanf(" %d", &readed_value);
  clear_terminal();

  if (readed_value % 5 == 0) {
    printf("O valor é divisível por 5.\n");
  } else if (readed_value % 3 == 0) {
    printf("O valor é divisível por 3.\n");
  } else if (readed_value % 2 == 0) {
    printf("O valor é divisível por 2.\n");
  } else {
    printf("O valor não é divisível por 5, 3 ou 2.\n");
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