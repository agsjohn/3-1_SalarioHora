#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  setlocale(LC_ALL, "Portuguese");
  int hora, extra;
  float rh, re, total;
  char resposta;
  printf("Digite as horas normais trabalhadas: ");
  scanf("%i", &hora);
  getchar();
  rh = hora * 20.00;
  printf("Foram trabalhadas horas extras? ");
  scanf("%c", &resposta);
  getchar();
  if (resposta == 's' || resposta == 'S') {
    printf("Digite as horas extras trabalhadas: ");
    scanf("%i", &extra);
    getchar();
    re = extra * 25.00;
    total = rh + re;
    printf("\nHoras trabalhadas: %i \nHoras extras trabalhadas: %i \nSalário "
           "das horas normais: R$%.2f \nSalário das horas extras: R$%.2f "
           "\nTotal recebido: R$%.2f",
           hora, extra, rh, re, total);
  } else {
    total = rh;
    printf("\nHoras trabalhadas: %i \nSalário das horas normais: R$%.2f "
           "\nTotal recebido: R$%.2f",
           hora, rh, total);
  }
  getchar();
}