#include <stdio.h>

int main(){
    printf("desafio cartas super trunfo!: ");

    //float populacao = 293.237 ;
    //int turismo = 15;
    //float area = 30.8;
    //float PIB = 43.031.91;
    //char estado[50] = SP;
    //char codigo[50] = A01;
    //char cidade[50] = diadema;

    
    float populacao ;
    int turismo;
    float area;
    float PIB;
    char estado[50];
    char codigo[50];
    char cidade[50];

    
    
    printf("Digite o estado (sigla, ex: SP): ");
    scanf("%2s",estado);
    
    printf("digite o codigo:\n ");
    scanf("%s",codigo);
    
    printf("digite a cidade:\n ");
    scanf("%s",cidade);
    
    printf("digite a populacao:\n ");
    scanf("%f",&populacao);
    
    printf("digite a area:\n ");
    scanf("%f",&area);

    printf("digite o pib sem ponto e sem virgula:\n ");
    scanf("%f",&PIB);
    
    printf("digite o turismo:\n ");
    scanf("%i",&turismo);
    
     
    printf("qual o estado: %2s \n", estado);
    printf("qual o codigo: %s \n", codigo);
    printf("qual a cidade: %s \n", cidade);
    printf("qual a populacao: %f \n", populacao);
    printf("qual a area: %f \n", area);
    printf("qual o PIB: %f \n", PIB);
    printf("qual o turismo: %i \n", turismo);

    


 


}
