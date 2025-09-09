#include <stdio.h>

int main(){
   //Variaveis para cadastro primeira carta
   char estado[20] = "estado";
   char codigoCarta[10] = "cod";
   char nomeDaCidade[30] = "cidade";
   unsigned int populacao;
   float area;
   float pib;
   short int numeroDePontosTuristicos;

    
   //Variavies para cadastro segunda carta
   char estado2[20] = "estado2";
   char codigoCarta2[10] = "cod2";
   char nomeDaCidade2[30] = "cidade2";
   unsigned int populacao2;
   float area2;
   float pib2;
   short int numeroDePontosTuristicos2;

   //Recebimentos de dados para cadastro primeira carta
   printf("***Cadastro de dados primeira carta***\n");
   printf("Insira o estado da carta:\n");
   scanf(" %[^\n]", estado);
   printf("Insira o código da carta:\n");
   scanf("%s", codigoCarta);
   printf("Insira o nome da cidade:\n");
   scanf(" %[^\n]", nomeDaCidade);
   printf("Insira a população da cidade:\n");
   scanf("%u", &populacao);
   printf("insira a área (km²) da cidade:\n");
   scanf("%f", &area);
   printf("Insira o pib da cidade:\n");
   scanf("%f", &pib);
   printf("Insira os pontos túrisitcos da cidade:\n");
   scanf("%hi", &numeroDePontosTuristicos);

   //Recebimentos de dados para cadastro primeira carta
   printf("***Cadastro de dados segunda carta***\n");
   printf("Insira o estado da segunda carta:\n");
   scanf(" %[^\n]", estado2);
   printf("Insira o código da segunda carta:\n");
   scanf("%s", codigoCarta2);
   printf("Insira o nome da cidade para a segunda carta:\n");
   scanf(" %[^\n]", nomeDaCidade2);
   printf("Insira a população da cidade para a segunda carta:\n");
   scanf("%u", &populacao2);
   printf("insira a área (km²) da cidade da segunda carta:\n");
   scanf("%f", &area2);
   printf("Insira o pib da cidade para a segunda carta:\n");
   scanf("%f", &pib2);
   printf("Insira os pontos túrisitcos da cidade para a segunda carta:\n");
   scanf("%hi", &numeroDePontosTuristicos2);

}