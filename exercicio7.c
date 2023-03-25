#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  int selected_option = 0;
  printf("100 - Cachorro Quente R$ 10,10\n");
  printf("101 - Bauru Simples   R$ 8,30\n");
  printf("102 - Bauru C/Ovo     R$ 8,50\n");
  printf("103 - Hamburguer      R$ 12,50\n");
  printf("104 - Cheeseburger    R$ 13,25\n\n");
  printf("Informe o código do pedido: ");
  scanf("%d", &selected_option);
  clear_terminal();

  int selected_quantity = 0;
  printf("Informe o quantidade do pedido: ");
  scanf("%d", &selected_quantity);
  clear_terminal();

  float price = 0;
  switch (selected_option) {
    case 100:
      price = 10.10;
      break;
    case 101:
      price = 8.30;
      break;
    case 102:
      price = 8.50;
      break;
    case 103:
      price =  12.50;
      break;
    case 104:
      price = 13.25;
      break;
    default:
      clear_terminal();
      printf("Código inválido.");
      exit(EXIT_FAILURE);
  }

  const float final_price = price * selected_quantity;
  printf("O preço do pedido é R$%.2f\n", final_price);
  return EXIT_SUCCESS;
}

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}