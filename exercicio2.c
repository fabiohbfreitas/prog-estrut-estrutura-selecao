#include <locale.h>
#include  <stdio.h>
#include <stdlib.h>

void clear_terminal();
int compare_string(char *first, char *second);

#define TAX_DF 0.2
#define TAX_MG 0.18
#define TAX_SP 0.21
#define TAX_PR 0.22

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  float product_price = 0;
  printf("Digite o preço do produto: ");
  scanf(" %f", &product_price);
  fflush(stdin);
  if (product_price < 0) {
    printf("O preço deve ser um valor positivo.\n");
    return EXIT_FAILURE;
  }
  clear_terminal();

  char selected_state[2];
  printf("Digite o estado(df,mg,sp,pr): ");
  scanf(" %s", selected_state);
  fflush(stdin);
  clear_terminal();
  float final_price = 0.0;
  if (compare_string(selected_state, "df")==0) {
    final_price = product_price * (1+TAX_DF);
    printf("O preço para %s é: R$%.2f\n", selected_state, final_price);
  } else if (compare_string(selected_state, "mg")==0) {
    final_price = product_price * (1+TAX_MG);
    printf("O preço para %s é: R$%.2f\n", selected_state, final_price);
  } else if (compare_string(selected_state, "sp")==0) {
    final_price = product_price * (1+TAX_SP);
    printf("O preço para %s é: R$%.2f\n", selected_state, final_price);
  } else if (compare_string(selected_state, "pr")==0) {
    final_price = product_price * (1+TAX_PR);
    printf("O preço para %s é: R$%.2f\n", selected_state, final_price);
  } else {
    printf("Estado inválido.\n");
    return EXIT_FAILURE;
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

int compare_string(char *first, char *second) {
   while (*first == *second) {
      if (*first == '\0' || *second == '\0')
         break;
         
      first++;
      second++;
   }

   if (*first == '\0' && *second == '\0')
      return 0;
   else
      return -1;
}