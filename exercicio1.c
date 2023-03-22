#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  float readed_value = 0;
  printf("Digite o número: ");
  scanf(" %f", &readed_value);

  if(readed_value > 0) {
    const float square_root = sqrtf(readed_value);
    const float power_of_two = powf(readed_value, 2.0);
    clear_terminal();
    printf("Raiz Quadrada: %.4f\nElevado ao quadrado: %.4f\n", square_root, power_of_two);
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