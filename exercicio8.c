#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();
  int total_calories = 0;

  int selected_plate = 0;
  printf("1 - Vegetariano\n");
  printf("2 - Peixe\n");
  printf("3 - Frango\n");
  printf("4 - Carne\n\n");
  printf("Selecione o prato desejado: ");
  scanf("%d", &selected_plate);
  clear_terminal();
  switch (selected_plate) {
  case 1:
    total_calories += 180;
    break;
  case 2:
    total_calories += 230;
    break;
  case 3:
    total_calories += 250;
    break;
  case 4:
    total_calories += 350;
    break;
  default:
      printf("Prato inválido.\n");
      exit(EXIT_FAILURE);
  }

int selected_dessert = 0;
printf("1 - Abacaxi\n");
printf("2 - Sorvete Diet\n");
printf("3 - Mouse Diet\n");
printf("4 - Mouse Chocolate\n\n");
printf("Selecione a sobremesa desejada: ");
scanf("%d", &selected_dessert);
clear_terminal();
switch (selected_dessert) {
  case 1:
    total_calories += 75;
    break;
  case 2:
    total_calories += 110;
    break;
  case 3:
    total_calories += 170;
    break;
  case 4:
    total_calories += 200;
    break;
  default:
      clear_terminal();
      printf("Sobremesa inválida.\n");
      exit(EXIT_FAILURE);
  }

int selected_beverage = 0;
printf("1 - Chá\n");
printf("2 - Suco Laranja\n");
printf("3 - Suco Melão\n");
printf("4 - Refrigerante Diet\n\n");
printf("Selecione a bebida desejada: ");
scanf("%d", &selected_beverage);
clear_terminal();
switch (selected_beverage) {
  case 1:
    total_calories += 20;
    break;
  case 2:
    total_calories += 70;
    break;
  case 3:
    total_calories += 100;
    break;
  case 4:
    total_calories += 65;
    break;
  default:
      clear_terminal();
      printf("Prato inválido.\n");
      exit(EXIT_FAILURE);
  }

  printf("O total de calorias é: %d\n", total_calories);

  return EXIT_SUCCESS;
}

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}