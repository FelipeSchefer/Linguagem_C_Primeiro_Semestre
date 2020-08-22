//Faculdade SENAI
//Professor João Miguel
//Programação Básica

//FELIPE TEIXEIRA SCHEFER

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//função estilo tabela
int imprimirTabela(int matriz[3][3]){
   int linha, coluna;
   for (linha=0; linha<4; linha++){
       switch(linha){
        case 0 :
            printf(" Fontes de Energia");
            printf("     |");
            break;
        case 1 :
            printf("   Abril  ");
            printf("|");
            break;
        case 2 :
            printf("   Maio   ");
            printf("|");
            break;
        case 3 :
            printf("   Junho  ");
            printf("|");
            break;
        }

   }
   printf("\n");
   for(coluna=0;coluna<3;coluna++){
         switch(coluna){
        case 0 :
            printf(" Aerogerador           ");
            break;
        case 1 :
            printf(" Paineis fotovoltaicos ");
            break;
        case 2 :
            printf(" Rede eletrica         ");
            break;
        }
		for(linha=0;linha<3;linha++){
            printf("| %4d kWh ",matriz[coluna][linha]);
		}
      	printf("|\n");
	}
}

//PRODUCAO POR TURNO
int mediaTrimestre(int matriz[3][3]){

    int i,j;
    float linhaMedia[3]={0};

	for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           linhaMedia[i] += matriz[i][j];
        }
    }
    printf("\n\t- MEDIA TRIMESTRAL -\n\n");
    for(i=0;i<3;i++){
      switch(i){
        case 0 :
           printf("\tAerogerador    %d - %.2f kWh\n",i+1,linhaMedia[0]/3);
            break;
        case 1 :
            printf("\tPaineis        %d - %.2f kWh\n",i+1,linhaMedia[1]/3);
            break;
        case 2 :
            printf("\tRede eletrica  %d - %.2f kWh\n",i+1,linhaMedia[2]/3);
            break;

    }

    }
}

//CONSUMO MENSAL
int consumo(int matriz[3][3])
{
	int colunaSoma[3]={0},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            colunaSoma[j] += matriz[i][j];
        }
    }
    printf("\n\t- CONSUMO MENSAL -\n\n");
    for(j=0;j<3;j++)
    {
        switch(j){
        case 0 :
           printf("\tAbril \t %d - %d kWh\n",j+1,colunaSoma[j]);
            break;
        case 1 :
            printf("\tMaio \t %d - %d kWh\n",j+1,colunaSoma[j]);
            break;
        case 2 :
            printf("\tJulho \t %d - %d kWh\n",j+1,colunaSoma[j]);
            break;
        }


    }
}

int main(){
//valor tabela
int energia[3][3] = {{112, 93, 97},
                     {124, 139, 132},
                     {157, 189, 168}};
 //chamar tabela
 printf("\n \tFELIPE TEIXEIRA SCHEFER \n");
 printf("\n");
 imprimirTabela(energia);
 mediaTrimestre(energia);
 consumo(energia);
}
