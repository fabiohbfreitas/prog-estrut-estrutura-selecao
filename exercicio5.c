#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear_terminal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  clear_terminal();

  float monetary_value = 0;
  printf("Digite a quantidade de dinheiro: ");
  scanf("%f", &monetary_value);

  if (monetary_value >= 100) {
    int notes_100 = 0;
    while (monetary_value >= 100) {
      notes_100 += 1;
      monetary_value -= 100;
    }
    printf("%d %s de 100\n", notes_100, notes_100 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 50) {
    int notes_50 = 0;
    while (monetary_value >= 50) {
      notes_50 += 1;
      monetary_value -= 50;
    }
    printf("%d %s de 50\n", notes_50, notes_50 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 20) {
    int notes_20 = 0;
    while (monetary_value >= 20) {
      notes_20 += 1;
      monetary_value -= 20;
    }
    printf("%d %s de 20\n", notes_20, notes_20 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 10) {
    int notes_10 = 0;
    while (monetary_value >= 10) {
      notes_10 += 1;
      monetary_value -= 10;
    }
    printf("%d %s de 10\n", notes_10, notes_10 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 5) {
    int notes_5 = 0;
    while (monetary_value >= 5) {
      notes_5 += 1;
      monetary_value -= 5;
    }
    printf("%d %s de 5\n", notes_5, notes_5 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 2) {
    int notes_2 = 0;
    while (monetary_value >= 2) {
      notes_2 += 1;
      monetary_value -= 2;
    }
    printf("%d %s de 2\n", notes_2, notes_2 > 1 ? "notas" : "nota");
  }

  if (monetary_value >= 1) {
    int coins_1 = 0;
    while (monetary_value >= 1) {
      coins_1 += 1;
      monetary_value -= 1;
    }
    printf("%d %s de 1\n", coins_1, coins_1 > 1 ? "moedas" : "moeda");
  }

  if (monetary_value >= 0.50) {
    int coins_050 = 0;
    while (monetary_value >= 0.50) {
      coins_050 += 1;
      monetary_value -= 0.50;
    }
    printf("%d %s de 0.50\n", coins_050, coins_050 > 1 ? "moedas" : "moeda");
  }

  if (monetary_value >= 0.25) {
    int coins_025 = 0;
    while (monetary_value >= 0.25) {
      coins_025 += 1;
      monetary_value -= 0.25;
    }
    printf("%d %s de 0.25\n", coins_025, coins_025 > 1 ? "moedas" : "moeda");
  }

  if (monetary_value >= 0.10) {
    int coins_010 = 0;
    while (monetary_value >= 0.10) {
      coins_010 += 1;
      monetary_value -= 0.10;
    }
    printf("%d %s de 0.10\n", coins_010, coins_010 > 1 ? "moedas" : "moeda");
  }

  if (monetary_value >= 0.05) {
    int coins_005 = 0;
    while (monetary_value >= 0.05) {
      coins_005 += 1;
      monetary_value -= 0.05;
    }
    printf("%d %s de 0.05\n", coins_005, coins_005 > 1 ? "moedas" : "moeda");
  }

  if (monetary_value >= 0.01) {
    int coins_001 = 0;
    while (monetary_value >= 0.01) {
      coins_001 += 1;
      monetary_value -= 0.01;
    }
    printf("%d %s de 0.01\n", coins_001, coins_001 > 1 ? "moedas" : "moeda");
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