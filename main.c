#include<stdio.h>
#include <locale.h>
#include <stdlib.h>


void Menu()
{


        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
        printf("1. Gest�o de TI\n");
        printf("2. An�lise d Desenvolvimento de Sistemas\n");
        printf("3. Seguran�a da Informa��o\n");
        printf("4. M�dia Aprovado Reprovado\n");
        printf("5. Diferenca Maior Menor\n");
        printf("6. Em Ordem Tres Numeros\n");
        printf("0. Sair\n\n\n");


}

void sair()
{
    printf("\n\n\t Obrigado por testar o nosso programa!!\n\n");
}

void Em_Ordem_Tres_Numeros()
{
        int num1;
        int num2;
        int num3;
        int temp;

    printf("Numero 1 : ");
    scanf("%d", &num1);

    printf("Numero 2 : ");
    scanf("%d", &num2);

    printf("Numero 3 : ");
    scanf("%d", &num3);

    if (num2 > num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num3 > num1)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num3 > num2)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("A ordem dos numeros � : %d > %d > %d", num1, num2, num3);
}

void Media_Aprovado_Reprovado()
{
// declara��o de variaveis
  	float nota1;
  	float nota2;
  	float nota3;
  	float nota4;
  	float mediaAnual;

  	// entrada
  	printf("Digite a nota 1 : ");
	scanf("%f", &nota1);
  	printf("Digite a nota 2 : ");
	scanf("%f", &nota2);
	printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

  	// processamento
  	mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

	// criticar para saber se o aluno esta aprovado ou retido
	// saida
	if (mediaAnual >= 7)
  	{
  		printf( "APROVADO !!!\n");
    }
  	else
  	{
	    printf( "REPROVADO !!!\n");

  	}
  	return;
}

void DiferencaMaiorMenor()
{
    // declara��o de variaveis
  	int n1;
  	int n2;
  	int result;

  	// entrada
  	printf("Digite o valor do primeiro numero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo numero : ");
	scanf("%d", &n2);

  	// processamento
  	if (n1 > n2)
  	{
  		result = n1 - n2;
    }
  	else
  	{
	    result = n2 - n1;
  	}

  	// saida
  	printf("O Resultado da diferen�a do maior numero pelo menor e : %d\n", result);

  	return;
}

void gestaoTI()
{
    printf("Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n");
}

void analiseDesenvolvimentoSistemas()
{
    printf("O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n");
}

void segurancaInformacao()
{
    printf("Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n");
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    Menu();
    system("color A");
    system("title PimCorenip");

    do
    {

        printf("\nDigite: ");
        fflush(stdin);
        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                Menu();
                gestaoTI();
                break;

            case 2:
                Menu();
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                Menu();
                segurancaInformacao();
                break;

            case 4:
                Menu();
                Media_Aprovado_Reprovado();
                break;

            case 5:
                Menu();
                DiferencaMaiorMenor();
                break;

            case 6:
                Menu();
                Em_Ordem_Tres_Numeros();
                break;

            case 0:
                sair();
                break;

            default:
                Menu();
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
