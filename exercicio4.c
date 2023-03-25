#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  char selected_operation;
  do {
    clear_terminal();
    fflush(stdin);
    printf("Digite a Operação desejada(+,-,*,/): ");
    scanf(" %c", &selected_operation);
  } while (selected_operation != '+' && selected_operation != '-' && selected_operation != '*' && selected_operation != '/');
  clear_terminal();
  printf("Digite o primeiro valor: ");
  float first_value = 0;
  scanf("%f", &first_value);
  clear_terminal();
  printf("Digite o primeiro valor: ");
  float sec_value = 0;
  scanf("%f", &sec_value);
  clear_terminal();

  if (sec_value == 0 && selected_operation == '/') {
    printf("Não é possível realizar divisão por zero.\n");
    return EXIT_FAILURE;
  } else {
    printf("O resultado é: ");
    switch (selected_operation) {
    case '+':
      printf("%.2f\n", first_value + sec_value);
      break;
    case '-':
      printf("%.2f\n", first_value - sec_value);
      break;
    case '*':
      printf("%.2f\n", first_value * sec_value);
      break;
    case '/':
      printf("%.2f\n", first_value / sec_value);
      break;
    }
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