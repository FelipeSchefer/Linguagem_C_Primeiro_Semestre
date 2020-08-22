#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

//Felipe Teixeira Schefer
int main()
{
setlocale(LC_ALL,"Portuguese");
	//variaveis
	int cargo,
	    tipo,
		autorizado,
		senha;

	//Tela inicial
	printf("------------------------------------------------------\n");
	printf("| SICA40 - Sistema Industrial para Controle de Acesso|\n");
	printf("| Aproxime seu cartão para realizar a autenticação   |\n");
	printf("------------------------------------------------------\n");
	printf("\n\t 1 => Para Operador");
	printf("\n\t 2 => Para Supervisor\n");
	printf("\n\t Opcao: ");
	scanf("%d", &cargo);

	//Logica
	switch (cargo)
	{
		//OPERADOR
		case 1:
		    printf ("\n*********************************************\n");
			printf ("* Cargo: Operador                           *\n");
			printf ("* Liberado para ajustes e configurações     *\n");
			printf ("* Informe codigo de acesso:  ");
			scanf  ("%d", &tipo);
			printf ("*********************************************\n");

			if (tipo == 1234)
			{
				printf("\n Usuario: Carlos Sousa");
				printf("\n Maquina liberada para acesso presencial");
				autorizado = 1;
			}
			if (tipo == 872)
			{
				printf("\n Usuario: Julia Silveira");
				printf("\n Maquina liberada para acesso presencial");
				autorizado = 1;
			}
			if (tipo != 1234 && tipo != 872)
            {
                printf("Código de acesso inválido, você não esta autorizado a acessar a maquina.");
            }
            autorizado = 1;

            //SENHA
			if (autorizado == 1 && tipo == 1234)
            {
				printf("\n digite sua senha:");
				scanf("%d",&senha);
				    	if(senha<=500)
                        {
                            senha = senha + 10;
                        }
                        else
                        {
                            senha = senha - 10;
                        }
                        printf("\n\tSenha gravada com sucesso, sua nova senha é: %d",senha);

            }
            if (autorizado == 1 && tipo == 872)
            {
				printf("\n digite sua senha:");
				scanf("%d",&senha);
				    	if(senha<=500)
                        {
                            senha = senha + 10;
                        }
                        else
                        {
                            senha = senha - 10;
                        }
                        printf("\n\tSenha gravada com sucesso, sua nova senha é: %d",senha);
            }
            autorizado = 0;
			break;

		//SUPERVISOR
		case 2:
		    printf ("\n*******************************************************\n");
			printf ("* Cargo: Supervisor                                   *\n");
			printf ("* Liberado para ajustes, configurações e desligamento *\n");
			printf ("* Informe codigo de acesso: ");
			scanf  ("%d", &tipo);
			printf ("*******************************************************\n");
			if (tipo == 2055)
			{
				printf("\n Usuario: Giovane Andrade");
				printf("\n Maquina liberada para acesso presencial");
				autorizado = 1;
			}
			if (tipo == 136)
			{
				printf("\n Usuario: Rafael Dias");
				printf("\n Maquina liberada para acesso presencial");
				autorizado = 1;
			}
            if (tipo != 2055 && tipo != 136)
            {
                printf("Código de acesso inválido, você não esta autorizado a acessar a maquina.");
            }
			autorizado = 1;
			//SENHA
			if (autorizado == 1 && tipo == 2055)
            {
				printf("\n digite sua senha:");
				scanf("%d",&senha);
				    	if(senha<=500)
                        {
                            senha = senha + 10;
                        }
                        else
                        {
                            senha = senha - 10;
                        }
                        printf("\n\tSenha gravada com sucesso, sua nova senha é: %d",senha);
            }
            if (autorizado == 1 && tipo == 136)
            {
				printf("\n digite sua senha:");
				scanf("%d",&senha);
				    	if(senha<=500)
                        {
                            senha = senha + 10;
                        }
                        else
                        {
                            senha = senha - 10;
                        }
                        printf("\n\tSenha gravada com sucesso, sua nova senha é: %d",senha);
            }
            autorizado = 0;
			break;

		default:
			autorizado = 0;


        if(autorizado == 0)
        {
            printf("\n\n Tipo de usuario não encontrado");
            printf("\n Acesso negado");
        }
	}



	printf("\n\n");
	system("pause");

}












