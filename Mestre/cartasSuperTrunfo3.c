#include <stdio.h>

int main(){
  // declarando variaveis da carta 1 e carta 2
  char estado1[20], estado2[20];
  char codigoDaCarta1[10], codigoDaCarta2[10], nomeDaCidade1[20], nomeDaCidade2[20];
  unsigned long int populaçao1, populaçao2;
  int pontosTuristicos1, pontosTuristicos2;
  float pib1, pib2;
  float area1, area2;
  // variaveis para armazenar o resultado da densidade populacional e do PIB per Capita
  float densidadeHab1, densidadeHab2;
  float pibPerCapita1, pibPerCapita2;
  // variaveis para o super poder
  float densidadeInversa1, densidadeInversa2;
  float superPoder1, superPoder2;
  // variaveis para comparação
  int resultPop, resultArea, resultPIB, resultPontosTur, resultDensidade, resultPPC, resultSuperPoder;

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
  scanf("%lu", &populaçao1);

  //usuario informa os km²
  printf("Qual a área dessa cidade em quilômetros quadrados(km²)? ");
  scanf("%f", &area1);

  //usuario informa o PIB da cidade selecionada
  printf("Qual o PIB(Produto Interno Bruto) dessa cidade?(Ex:70000) ");
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
  scanf("%lu", &populaçao2);

  //usuario informa os km²
  printf("Qual a área dessa cidade em quilômetros quadrados(km²)? ");
  scanf("%f", &area2);

  //usuario informa o PIB da cidade selecionada
  printf("Qual o PIB(Produto Interno Bruto) dessa cidade?(Ex:70000) ");
  scanf("%f", &pib2);

  //usuario apresenta a quantidade de pontos turisticos da cidade
  printf("Por fim, quantos pontos turísticos essa cidade possui? ");
  scanf("%d", &pontosTuristicos2);

  printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

  // Calculandno a densidade populacional da carta 1 e 2
  densidadeHab1 = populaçao1 / area1;
  densidadeHab2 = populaçao2 / area2;

  // Calculando o PIB per Capita da carta 1 e 2
  pibPerCapita1 = pib1 / populaçao1; 
  pibPerCapita2 = pib2 / populaçao2; 

  // Calculando o inverso da densidade populacional
  densidadeInversa1 = 1.0 / pibPerCapita1;
  densidadeInversa2 = 1.0 / pibPerCapita2;

  // Calculando o Super Poder
  superPoder1 = populaçao1 + (int)area1 + pib1 + pontosTuristicos1 + (int)pibPerCapita1 + (int)densidadeInversa1; 
  superPoder2 = populaçao2 + (int)area2 + pib2 + pontosTuristicos2 + (int)pibPerCapita2 + (int)densidadeInversa2; 

  // Verificando quais cartas venceram
  resultPop = populaçao1 > populaçao2;
  resultArea = area1 > area2;
  resultPIB = pib1 > pib2;
  resultPontosTur = pontosTuristicos1 > pontosTuristicos2;
  resultDensidade = densidadeHab1 > densidadeHab2;
  resultPPC = pibPerCapita1 > pibPerCapita2;
  resultSuperPoder = superPoder1 > superPoder2;

  printf("RESULTADO\n");
  printf("Carta 1\n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %2.f km² \n PIB: %1.f bilhões de reais \n Número de pontos turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais \n", estado1, codigoDaCarta1, nomeDaCidade1, populaçao1, area1, pib1, pontosTuristicos1, densidadeHab1, pibPerCapita1);

  printf("-------------------------------------------------------------- \n");

  printf("RESULTADO\n");
  printf("Carta 2\n Estado: %s \n Código: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.1f bilhões de reais \n Número de pontos turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais \n", estado2, codigoDaCarta2, nomeDaCidade2, populaçao2, area2, pib2, pontosTuristicos2, densidadeHab2, pibPerCapita2 );  

  printf("-------------------------------------------------------------- \n");

  printf("COMPARAÇÃO DE CARTAS\n");
  // comparação de população
  if (resultPop == 1) {
    printf("População: Carta 1 venceu (%d) \n", resultPop);
  }else {
    printf("População: Carta 2 venceu (%d) \n", resultPop);
  };

  // comparação de área
  if (resultArea == 1) {
    printf("Área: Carta 1 venceu (%d) \n", resultArea);
  }else {
    printf("Área: Carta 2 venceu (%d) \n", resultArea);
  };

  // comparação do pib
  if (resultPIB == 1) {
    printf("PIB: Carta 1 venceu (%d) \n", resultPIB);
  }else {
    printf("PIB: Carta 2 venceu (%d) \n", resultPIB);
  };

  // comparação de pontos turisticos
  if (resultPontosTur == 1) {
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", resultPontosTur);
  }else {
    printf("Pontos Turísticos: Carta 2 venceu (%d) \n", resultPontosTur);
  };

  // comparação de densidade populacional
  if (resultDensidade == 0) {
    printf("Densidade populacional: Carta 1 venceu (%d) \n", resultDensidade);
  }else {
    printf("Densidade populacional: Carta 2 venceu (%d) \n", resultDensidade);
  };

  // comparação do Pib per Capita
  if (resultPPC == 1) {
    printf("PIB per Capita: Carta 1 venceu (%d) \n", resultPPC);
  }else {
    printf("PIB per Capita: Carta 2 venceu (%d) \n", resultPPC);
  };

  // comparação dO SUper Poder
  if (resultSuperPoder == 1) {
    printf("Super Poder: Carta 1 venceu (%d) \n", resultSuperPoder);
  }else {
    printf("Super Poder: Carta 2 venceu (%d) \n", resultSuperPoder);
  };

  return 0;
}