//Faculdade SENAI
//Professor João Miguel
//Programação Básica
//APS-04 Controle da Produção

//ALUNO: Felipe Teixeira Schefer

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Constantes
#define TUR 3
#define SEM 4

//Funções
int producaoTurno(int matriz[TUR][SEM])
{
	int turnoSoma[4]={0},i,j;

	int turno,semana;

	for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           turnoSoma[i] += matriz[i][j];
        }
    }
    printf("\n\t- PRODUÇÃO POR TURNO -\n\n");
    for(i=0;i<3;i++){
      printf("\tSoma do turno %d - %d\n",i+1,turnoSoma[i]);
    }
}

int producaoSemanal(int matriz[TUR][SEM])
{
	int colunaSoma[4]={0},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            colunaSoma[j] += matriz[i][j];
        }
    }
    printf("\n\t- PRODUÇÃO SEMANAL -\n\n");
    for(i=0;i<4;i++)
    {
       printf("\tSoma da semana %d - %d\n",i+1,colunaSoma[i]);
    }
}

int producaoMensal(int matriz[TUR][SEM]) {
	int somaMensal=0,i,j;

	for(i=0;i<3;i++)
    {

        for(j=0;j<4;j++)
        {
            somaMensal+=matriz[i][j];
        }
    }
	printf("\n\t- PRODUÇÃO MENSAL -\n\n");
	printf("\tSoma do mês = %d",somaMensal);
    if(somaMensal==12000)
    {
    	printf("\n\nProdução mensal - Meta atingida: %d",somaMensal);
    	printf("\n\n");
	}
	else if(somaMensal>12000)
	{
		printf("\n\nProdução mensal - Meta ultrapassada: %d",somaMensal);
		printf("\n\n");
	}
	else
    {
		printf("\n\nProdução mensal - Meta não atingida: %d",somaMensal);
		printf("\n\n");
	}
}

void ImprimeProducao (int matriz[TUR][SEM]) {
	//Declaração de Variávies
	int turno,semana;
	//Processamento da Função
	for(semana=0;semana<4;semana++)
			printf(" Sem:%d ",semana+1);        //Imprime 'Sem:X'
	printf("\n");
	for(turno=0;turno<3;turno++){               //Varre o Turno
		for(semana=0;semana<4;semana++)
			printf("+------");
		printf("+\n");
		for(semana=0;semana<4;semana++){        //Varre a Semana
			printf("+ %4d ",matriz[turno][semana]);
		}
		printf("+ Turno:%d\n",turno+1);         //Imprime 'Turno:X'
	}
	for(semana=0;semana<4;semana++)
		printf("+------");
	printf("+\n");
	//Função sem Retorno
}

//Função Principal
void main(void){setlocale(LC_ALL,"Portuguese");
	//Declaração e Inicialização das Matrizes com os Dados de Producao de cada Filial;
	//Formato: producaoXX[turno][semana];
	int producaoSP[3][4] = {{1000, 1030,  900,  990},
							{1010, 1045, 1100, 1015},
							{1050, 1065, 1075, 1100}};

	int producaoRS[3][4] = {{ 900, 1000,  899,  994},
							{1015, 1085, 1175, 1090},
							{ 990,  977,  940,  935}};

	int producaoPR[3][4] = {{1200, 1005,  995, 1007},
							{ 910,  995,  995,  990},
							{ 945,  945,  950,  950}};

	//Declaracao de Variaveis
    char subsidiaria[3];
    int semana,i,j,k,l;
	int final_sum=0,producao,turno[4]={0};

    //Imprime as tabelas de produção

printf("\n\t-----------------------");
printf("\n\t|..DADOS DE PRODUÇÃO..|");
printf("\n\t-----------------------");

printf("\n\t=>   SUBSIDIARIAS:   <=\n\t=>         SP        <=\n\t=>         RS        <=\n\t=>         PR        <=");
printf("\n\t-----------------------\n");

	printf("\n\n ENTRE COM O ESTADO (EM LETRAS MAIUSCULAS) PARA VER TABELA: ");
	gets(subsidiaria);
	printf("\n\n");

	if(strcmp(subsidiaria,"SP")==0)
    {
		printf("\n\tSubsidiaria: SP\n\n");
		ImprimeProducao(producaoSP);
		producaoTurno(producaoSP);
		producaoSemanal(producaoSP);
		producaoMensal(producaoSP);
	}
        else if(strcmp(subsidiaria,"RS")==0)
        {
            printf("\n\tSubsidiaria: RS\n\n");
            ImprimeProducao(producaoRS);
            producaoTurno(producaoRS);
            producaoSemanal(producaoRS);
            producaoMensal(producaoRS);
        }
        else if(strcmp(subsidiaria,"PR")==0)
        {
            printf("\n\tSubsidiaria: PR\n\n");
            ImprimeProducao(producaoPR);
            producaoTurno(producaoPR);
            producaoSemanal(producaoPR);
            producaoMensal(producaoPR);
        }
        else
        {
            printf("\n OCORREU UM ERRO INSIRA UM ESTADO VALIDO!");
        }

//Finalização do código
printf("\n\n");
system("pause");
}
