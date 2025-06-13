#include <stdio.h>

int main(){
  // declarando variaveis da carta 1 e carta 2
  char estado1[20], estado2[20];
  char codigoDaCarta1[10], codigoDaCarta2[10], nomeDaCidade1[20], nomeDaCidade2[20];
  int populaçao1, populaçao2;
  int pontosTuristicos1, pontosTuristicos2;
  float pib1, pib2;
  float area1, area2;

  // ENTRADA DE DADOS DA CARTA 1
  printf("-------------------------------------------------------------- \n");
  printf("CARTA 1 \n");
  //usuario seleciona o estado
  printf("Digite o estado desejado: ");
  //scanf lê os dados apresentados pelo usuario
  scanf("%s", &estado1);

  //usuario informa qual o codigo da carta
  printf("Digite o código da carta (ex: A01, B03): ");
  scanf("%s", &codigoDaCarta1);

  //usuario seleciona a cidade
  printf("Digite o nome da cidade corresponde ao estado (%s): ", estado1);
  scanf("%s", &nomeDaCidade1);

  //usuario informa o numero de habitantes 
  printf("Qual o número de habitantes da cidade? ");
  scanf("%d", &populaçao1);

  //usuario informa os km²
  printf("Qual a área dessa cidade em quilômetros quadrados(km²)? ");
  scanf("%f", &area1);

  //usuario informa o PIB da cidade selecionada
  printf("Qual o PIB(Produto Interno Bruto) dessa cidade? ");
  scanf("%f", &pib1);

  //usuario apresenta a quantidade de pontos turisticos da cidade
  printf("Por fim, quantos pontos turísticos essa cidade possui? ");
  scanf("%d", &pontosTuristicos1);

  // ENTRADA DE DADOS DA CARTA 2
  printf("-------------------------------------------------------------- \n");
  printf("CARTA 2 \n");
  //usuario seleciona o estado
  printf("Digite o estado desejado: ");
  //scanf lê os dados apresentados pelo usuario
  scanf("%s", &estado2);

  //usuario informa qual o codigo da carta
  printf("Digite o código da carta (ex: A01, B03): ");
  scanf("%s", &codigoDaCarta2);

  //usuario seleciona a cidade
  printf("Digite o nome da cidade corresponde ao estado (%s): ", estado2);
  scanf("%s", &nomeDaCidade2);

  //usuario informa o numero de habitantes 
  printf("Qual o número de habitantes da cidade? ");
  scanf("%d", &populaçao2);

  //usuario informa os km²
  printf("Qual a área dessa cidade em quilômetros quadrados(km²)? ");
  scanf("%f", &area2);

  //usuario informa o PIB da cidade selecionada
  printf("Qual o PIB(Produto Interno Bruto) dessa cidade? ");
  scanf("%f", &pib2);

  //usuario apresenta a quantidade de pontos turisticos da cidade
  printf("Por fim, quantos pontos turísticos essa cidade possui? ");
  scanf("%d", &pontosTuristicos2);

  printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

  printf("RESULTADO\n");
  printf("Carta 1\n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %2.f km² \n PIB: %1.f bilhões de reais \n Número de pontos turísticos: %d \n", estado1, codigoDaCarta1, nomeDaCidade1, populaçao1, area1, pib1, pontosTuristicos1);

  printf("-------------------------------------------------------------- \n");

  printf("RESULTADO\n");
  printf("Carta 2\n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.1f bilhões de reais \n Número de pontos turísticos: %d \n", estado2, codigoDaCarta2, nomeDaCidade2, populaçao2, area2, pib2, pontosTuristicos2 );

}