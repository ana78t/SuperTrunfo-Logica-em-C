#include <stdio.h>
 int main(){

//Atribuir as variaveis
char estado1, estado2;
char NomeCidade1[50], NomeCidade2[50], codigo1[4], codigo2[4];
int pturisticos1, pturisticos2,populacao1, populacao2;;
float PIB1, PIB2, area1, area2,  densidade1, densidade2, percapita1, percapita2;
int opcao;
//Pedindo dados ao usuario
    
    //Estados
    printf("Defina o estado com uma letra de A a B\n Estado 1: ");
    scanf(" %c", &estado1);
    printf(" Estado 2: ");
    scanf(" %c", &estado2);
    
    printf("\n");

    //Codigo das cartas

    printf("Digite o código da carta (Exemplo A01 ou B02)\n Código da carta 1: ");
    scanf(" %s", codigo1);
    printf(" Codigo da carta 2: ");
    scanf(" %s", codigo2);
    
    printf("\n");

    //Nome das cidades
    printf("Digite o nome da cidade\n Cidade 1: ");
    scanf("%s", NomeCidade1);
    printf(" Cidade 2: ");
    scanf("%s", NomeCidade2);

    printf("\n");
        
    //população
    printf("Digite o número de habitantes da: \n Cidade 1: ");
    scanf("%d", &populacao1);
    printf("Cidade 2: ");
    scanf("%d", &populacao2);

    printf("\n"); 
    
    //area
    printf("\n");
    printf("Digite a área da cidade em km/2: \n Cidade 1: ");
    scanf("%f", &area1) ;
    printf(" Cidade 2: ");
    scanf("%f", &area2);

    printf("\n");
    
    //PIB 
    printf("Digite o PIB cidade.\n Cidade 1: ");
    scanf("%f", &PIB1) ;
    printf(" Cidade 2: ");
    scanf("%f", &PIB2);

    printf("\n");
    
    
    //Numero de pontos turiscos.
    printf("Digite o número de pontos turisticos da: \n Cidade 1: ");
    scanf("%d", &pturisticos1);
    printf(" Cidade 2: ");
    scanf("%d", &pturisticos2);

    printf("\n");

//Calculo da densidade (população/area)
    densidade1 = (float) populacao1/area1;
    densidade2 = (float) populacao2/area2;
      
//Calculo PIB per capita (PIB/População)
    percapita1 = (float) PIB1/populacao1;
    percapita2 = (float) PIB2/populacao2;


printf("Super Trunfo - Comparação de Cartas\n");
printf("Escolha um atributo para comparar:\n");
printf("1. População.\n");
printf("2. Área.\n");
printf("3. PIB.\n");
printf("4. Pontos turisticos.\n");
printf("5. Densidade.\n");
printf("6. PIB Per Capita.\n");
printf("Opção: ");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("Comparação da População:\n");
    printf("%s : %d\n",NomeCidade1,populacao1);
    printf("%s : %d\n",NomeCidade2,populacao2);

if (populacao1>populacao2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (populacao2>populacao1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");
}
    break;

case 2:
    printf("Comparação da Área:\n");
    printf("%s : %.2f\n",NomeCidade1,area1);
    printf("%s : %.2f\n",NomeCidade2,area2);

if (area1>area2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (area2>area1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");
}
    break;

case 3:
    printf("Comparação do PIB:\n");
    printf("%s : %.2f\n",NomeCidade1,PIB1);
    printf("%s : %.2f\n",NomeCidade2,PIB2);

if (PIB1>PIB2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (PIB2>PIB1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");
}
    break;

case 4:
    printf("Comparação dos Pontos Turisticos:\n");
    printf("%s : %d\n",NomeCidade1,pturisticos1);
    printf("%s : %d\n",NomeCidade2,pturisticos2);

if (pturisticos1>pturisticos2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (pturisticos2>pturisticos1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");
}
    break;

case 5:
    printf("Comparação da densidade: (O menor vence!)\n");
    printf("%s : %.2f\n",NomeCidade1,densidade1);
    printf("%s : %.2f\n",NomeCidade2,densidade2);

if (densidade1<densidade2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (densidade2<densidade1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");
}
    break;

case 6:
    printf("Comparação do PIB Per Capita.\n");
    printf("%s : %.2f\n",NomeCidade1,percapita1);
    printf("%s : %.2f\n",NomeCidade2,percapita2);

if (percapita1>percapita2)
{
    printf("A cidade: %s venceu!\n",NomeCidade1);
}else if (percapita2>percapita1){
    printf("A cidade: %s venceu!\n", NomeCidade2);
} else{
    printf("Empate!\n");    
}
   break;
default:
   printf("Opção inválida!");
    break;
}

return 0;

 }






