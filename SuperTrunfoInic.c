#include <stdio.h>

int main (){
  //base das informações
  char estado1[50], estado2[50], carta1[3], carta2[3], cidade1[50], cidade2[50];
  int populacao1, populacao2, pontoTuristico1, pontoTuristico2, res1, res2, res3, res4, res5,res6, res7;
  float km1, km2, pib1, pib2, densidade1, densidade2, media1, media2, mediapib1, mediapib2, superPoder1, superPoder2;
  
  //printf - solicita as informações - scanf busca as informações
  printf("Digite 2 números de carta de 01 a 04 (ex: 03 'enter' 02): \n");
  scanf("%2s %2s", &carta1, &carta2);//limita a 2 caracteres
  
  printf("Digite 2 letras de 'A' a 'H' representando um dos oito estados (ex: A 'enter' B): \n");
  scanf("%s %s", &estado1, &estado2);
    
  printf("Digite 2 Cidades (ex: Curitiba 'enter' Santos): \n");
  getchar(); //limpa o buffer
  scanf("%49[^\n] %49[^\n]", cidade1, cidade2);
  
  printf("Digite o número de População das 2 cidades (ex: 123 'enter' 456): \n");
  scanf("%d %d", &populacao1, &populacao2);

  printf("Digite o valor de quilômetros das 2 cidades (ex: 123.00 'enter' 456.00): \n");
  scanf("%e %e", &km1, &km2);
  
  printf("Digite o valor do PIB das 2 cidades (ex: 123.00 'enter' 456.00): \n");
  scanf("%f %f", &pib1, &pib2);
  
  printf("Digite quantos Pontos Turisticos tem as duas cidades (ex: 50 'enter' 35): \n");
  scanf("%d%d", &pontoTuristico1, &pontoTuristico2);

  // media da Densidade Populacional
  media1 = (float) populacao1 / km1;
  media2 = (float) populacao2 / km2;

  //PIB per Capita
  mediapib1 = (float) pib1 / populacao1;
  mediapib2 = (float) pib2 / populacao2;

  //retorno com as informações coletadas
  printf("Carta 1: %s\n", carta1);
  printf("Carta 2: %s\n", carta2);
  printf("Estado 1: %s\n", estado1);
  printf("Estado 2: %s\n", estado2);
  printf("Código 1: %s0%s\n", estado1, carta1);
  printf("Código 2: %s0%s\n", estado2, carta2);
  printf("Nome da Cidade 1: %s\n", cidade1);
  printf("Nome da Cidade 2: %s\n", cidade2);
  printf("População 1: %d\n", populacao1);
  printf("População 2: %d\n", populacao2);
  printf("Área 1: %.2f km²\n", km1);
  printf("Área 2: %.2f km²\n", km2);
  printf("PIB 1:  %.2f bilhões de reais\n", pib1);
  printf("PIB 2:  %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos 1:  %d\n", pontoTuristico1);
  printf("Número de Pontos Turísticos 2: %d\n", pontoTuristico2);
  printf("A Densidade Populacional 1 é: %.2f hab/Km²\n", media1);
  printf("A Densidade populacional 2 é: %.2f hab/Km²\n", media2);
  printf("PIB per Capita 1: %.2f reais\n", mediapib1);
  printf("PIB per Capita 2: %.2f reais\n", mediapib2);

 printf("Comparando as cartas: \n");

 superPoder1 = pontoTuristico1 + populacao1 + km1 + pib1 + mediapib1 - media1;
 
 superPoder2 = pontoTuristico2 + populacao2 + km2 + pib2 + mediapib2 - media2;
 
 //validação de quem é o maior
 res1 =  populacao1 > populacao2;
 res2 = km1 > km2;
 res3 = pib1 > pib2;
 res4 = pontoTuristico1 > pontoTuristico2;
 res5 = densidade1 > densidade2;
 res6 = mediapib1 > mediapib2;
 res7 = superPoder1 > superPoder2;

 //Quem venceu
 if(populacao1 > populacao2){
    printf("População: Carta 1 venceu! (%d)\n", res1);
 } else if (populacao2 > populacao1){
   printf("População: Carta 2 venceu! (%d)\n", res1);
 } 
 
 if(km1 > km2){
   printf("Área: Carta 1 venceu! (%d)\n", res2);
} else if (km2 > km1){
  printf("Área: Carta 2 venceu! (%d)\n", res2);
} 

if(pib1 > pib2){
   printf("PIB: Carta 1 venceu! (%d)\n", res3);
} else if (pib1 < pib2){
  printf("PIB: Carta 2 venceu! (%d)\n", res3);
} 
  
if(pontoTuristico1 > pontoTuristico2){
   printf("Pontos Turísticos: Carta 1 venceu! (%d)\n", res4);
} else if (pontoTuristico1 < pontoTuristico2){
  printf("Pontos Turísticos: Carta 2 venceu! (%d)\n", res4);
} 

if(densidade1 > densidade2){
   printf("Densidade Populacional: Carta 1 venceu! (%d)\n", res5);
} else if (densidade1 < densidade2){
  printf("Densidade Populacional: Carta 2 venceu! (%d)\n", res5);
} 

if(mediapib1 > mediapib2){
   printf("PIB per Capita: Carta 1 venceu! (%d)\n", res6);
} else if (mediapib1 < mediapib2){
  printf("PIB per Capita: Carta 2 venceu! (%d)\n", res6);
} 

if(superPoder1 > superPoder2){
   printf("Super Poder: Carta 1 venceu! (%d)\n", res7);
} else if (superPoder1 < superPoder2){
  printf("Super Poder: Carta 2 venceu! (%d)\n", res7);
} 

 return 0;

}