#include<stdio.h>
#include <locale.h>
#include <stdlib.h>


void Menu()
{


        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Gestão de TI\n");
        printf("2. Análise d Desenvolvimento de Sistemas\n");
        printf("3. Segurança da Informação\n");
        printf("4. Média Aprovado Reprovado\n");
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

    printf("A ordem dos numeros é : %d > %d > %d", num1, num2, num3);
}

void Media_Aprovado_Reprovado()
{
// declaração de variaveis
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
    // declaração de variaveis
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
  	printf("O Resultado da diferença do maior numero pelo menor e : %d\n", result);

  	return;
}

void gestaoTI()
{
    printf("Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n");
}

void analiseDesenvolvimentoSistemas()
{
    printf("O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}

void segurancaInformacao()
{
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
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
