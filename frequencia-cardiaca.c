#include <stdio.h>

void mostrar_dados(int idade, float fc_repouso, float fc_maximo, float fc_reserva, float lim_inf_zat, float lim_sup_zat){
  printf("\n\nIdade: %d", idade);
  printf("\n\nFC repouso: %.1f", fc_repouso);
  printf("\n\nFC máxima: %.1f", fc_maximo);
  printf("\n\nFC reserva: %.1f", fc_reserva);
  printf("\n\nLimite inferior da FC da ZAT (%): %.1f", lim_inf_zat);
  printf("\n\nLimite superior da FC da ZAT (%): %.1f", lim_sup_zat);
}

int main(void) {

  float fc_repouso, fc_maximo, fc_reserva, lim_inf_zat, lim_sup_zat, intensidade_min, intensidade_max;
  int idade, tipo_de_calculo;


  printf("informe a idade do indivíduo: ");
  scanf("%d", & idade);

  printf("\ninforme a frequencia repouso: ");
  scanf("%f", & fc_repouso);

  printf("\ninforme a intesidade máxima: ");
  scanf("%f", & intensidade_max);

  printf("\ninforme a intensidade mínima: ");
  scanf("%f", & intensidade_min);

  printf("Qual formula deseja utilizar\nDigite 1 se deseja usar a fórmula usual\nDigite 2 se deseja usar a fórmula científica \n");
  scanf("%d", & tipo_de_calculo);

  if(tipo_de_calculo == 1){
    fc_maximo = 220 - idade;
    fc_reserva = fc_maximo - fc_repouso;
    lim_inf_zat = (fc_reserva * (intensidade_min / 100))+fc_repouso;
    lim_sup_zat = (fc_reserva * (intensidade_max / 100))+fc_repouso;

    mostrar_dados( idade, fc_repouso, fc_maximo, fc_reserva, lim_inf_zat, lim_sup_zat);
  }

  if(tipo_de_calculo == 2){
    fc_maximo = 208 - (0.7 * idade);
    fc_reserva = fc_maximo - fc_repouso;
    lim_inf_zat = (fc_reserva * (intensidade_min / 100))+fc_repouso;
    lim_sup_zat = (fc_reserva * (intensidade_max / 100))+fc_repouso;

    mostrar_dados(idade, fc_repouso, fc_maximo, fc_reserva, lim_inf_zat, lim_sup_zat);

  }
  return 0;
}
