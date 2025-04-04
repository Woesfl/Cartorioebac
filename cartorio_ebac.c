﻿#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <stdlib.h> // Biblioteca para alocação de memória
#include <locale.h> // Biblioteca para configuração de idioma e formato de dados
#include <string.h> // biblioteca responsável por cuidar das stings
int registro() //função resposável por cadastrar os usuários
{
	//início da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da criação de variáveis/string 
	
	printf("Digite o CPF a ser cadastrado: "); // coletando informação do usário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e "w" signigica escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, "," );
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:  ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:  ");
	scanf("%s", sobrenome);
	
    file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:  ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	system ("pause");	
	
}
int consulta() 
{
	char cpf[40];
	char conteudo[200];
	
	printf ("Digite o CPF a ser consultado:  ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
{
	 printf("Não foi possivel localizar este CPF.\n"); 
}

    while (fgets(conteudo, 200, file) != NULL)
    
{
	printf("\nEssas são as informações do usuário:  ");
	printf("%s",conteudo);
	printf("\n\n");
	
	system ("pause");	
}
}

int deletar()
{
   char cpf[40];
   
   printf("Digite o cpf a ser deletado:  ");
   scanf("%s", cpf);
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if("file == NULL")
   {
   	printf("O usuário não se encontra no sistema!.\n");
   	system("pause");
   }
}

int main() 
  {
	int opcao=0; // definindo variáveis
	int laco=1;
	
	for(laco=1;laco==1;)
	{

		system("cls");

		setlocale(LC_ALL, "pt_BR.utf8"); // Define o idioma para Português, para lidar com acentuação corretamente


		printf("### Cartório da EBAC ###\n\n"); // Imprime o título do cartório na tela
		printf("Escolha a opção desejada do menu\n\n"); // Solicita ao usuário que escolha uma opção do menu
		printf("\t1 - Registrar nomes\n"); // Exibe a opção 1 do menu: registrar nomes
		printf("\t2 - Consultar nomes\n"); // Exibe a opção 2 do menu: consultar nomes
		printf("\t3 - Deletar nomes\n"); // Exibe a opção 3 do menu: deletar nomes
		printf("\t4 - Sair do sistema\n\n");
		printf("Opção: ");  // fim do menu

		scanf("%d", &opcao); //estamos armazenando as informações

		system("cls"); // responsável por limpar a tela

		switch (opcao) //inicio da seleção do menu
		{
			case 1:
				registro(); //chamada de funções
				break;

			case 2:
				consulta();
				break;

			case 3:
				deletar();
				break;
				
			case 4:
			    printf("Agradecemos por utilizar o sistema!\n\n");
			    return 0;
			    break;

			default:
				printf("Lamentamos pelo ocorrido, porém está opção não é válida\nEscolha entre 1 a 3\n");
				break;
		}
	}
}


